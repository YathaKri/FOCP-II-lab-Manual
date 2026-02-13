#include <iostream>
#include <string>
#include <limits>
using namespace std;

const int max_stu = 50;
const int max_sub = 10;

void add_students(int ids[], string names[], int &count)
{
    if (count >= max_stu)
    {
        cout << "Max student limit reached\n";
        return;
    }
    int id;
    cout << "Enter ID: ";
    cin >> id;
    for (int i = 0; i < count; i++)
    {
        if (ids[i] == id)
        {
            cout << "Duplicate ID!\n";
            return;
        }
    }
    ids[count] = id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, names[count]);
    count++;
}

int search_students(int ids[], int count, int key)
{
    for (int i = 0; i < count; i++)
    {
        if (ids[i] == key)
            return i;
    }
    return -1;
}

void input_marks(int marks[][max_sub], int index, int subjects)
{
    for (int i = 0; i < subjects; i++)
    {
        int m;
        do
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> m;
        } while (m < 0 || m > 100);
        marks[index][i] = m;
    }
}

float average(int marks[][max_sub], int index, int subjects)
{
    if (subjects == 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < subjects; i++)
    {
        sum += marks[index][i];
    }
    return (float)sum / subjects;
}

char grade(float avg)
{
    if (avg >= 90)
        return 'A';
    if (avg >= 75)
        return 'B';
    if (avg >= 60)
        return 'C';
    if (avg >= 40)
        return 'D';
    return 'F';
}

void show_student(int ids[], string names[], int marks[][max_sub], int subs[], int idx)
{
    cout << "ID: " << ids[idx] << " Name: " << names[idx] << "\nMarks: ";
    for (int i = 0; i < subs[idx]; i++)
    {
        cout << marks[idx][i] << " ";
    }
    float avg = average(marks, idx, subs[idx]);
    cout << "\nAvg: " << avg << " Grade: " << grade(avg) << "\n";
}

int main()
{
    int ids[max_stu], subs[max_stu] = {0}, marks[max_stu][max_sub] = {0};
    string names[max_stu];
    int count = 0;
    int choice1, choice2;

    do
    {
        cout << "\n=== Main Menu ===\n";
        cout << "1. Student Operations\n";
        cout << "2. Reports & Analytics\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice1))
        {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice1)
        {
        case 1:
            do
            {
                cout << "\n--- Student Operations ---\n";
                cout << "1. Add Student\n";
                cout << "2. Enter Marks\n";
                cout << "3. View Student\n";
                cout << "4. Back to Main Menu\n";
                cout << "Enter choice: ";

                if (!(cin >> choice2))
                {
                    cout << "Invalid input! Returning to sub-menu.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    choice2 = 0;
                    continue;
                }

                if (choice2 == 1)
                {
                    add_students(ids, names, count);
                }
                else if (choice2 == 2)
                {
                    int id;
                    cout << "Enter ID: ";
                    cin >> id;
                    int idx = search_students(ids, count, id);
                    if (idx != -1)
                    {
                        cout << "Enter number of subjects: ";
                        cin >> subs[idx];
                        input_marks(marks, idx, subs[idx]);
                    }
                    else
                        cout << "Not found!\n";
                }
                else if (choice2 == 3)
                {
                    int id;
                    cout << "Enter ID: ";
                    cin >> id;
                    int idx = search_students(ids, count, id);
                    if (idx != -1)
                        show_student(ids, names, marks, subs, idx);
                    else
                        cout << "Not found!\n";
                }
            } while (choice2 != 4);
            break;

        case 2:
            do
            {
                cout << "\n--- Reports & Analytics ---\n";
                cout << "1. Class Average\n";
                cout << "2. Top Scorer\n";
                cout << "3. Back to Main Menu\n";
                cout << "Enter choice: ";

                if (!(cin >> choice2))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    choice2 = 0;
                    continue;
                }

                if (choice2 == 1)
                {
                    if (count == 0)
                        cout << "No students yet!\n";
                    else
                    {
                        float total = 0;
                        int validCount = 0;
                        for (int i = 0; i < count; i++)
                        {
                            if (subs[i] > 0)
                            {
                                total += average(marks, i, subs[i]);
                                validCount++;
                            }
                        }
                        if (validCount > 0)
                            cout << "Class Average: " << total / validCount << "\n";
                        else
                            cout << "No marks entered yet!\n";
                    }
                }
                else if (choice2 == 2)
                {
                    if (count == 0)
                        cout << "No students yet!\n";
                    else
                    {
                        int top = -1;
                        float topAvg = -1;
                        for (int i = 0; i < count; i++)
                        {
                            if (subs[i] > 0)
                            {
                                float a = average(marks, i, subs[i]);
                                if (a > topAvg)
                                {
                                    topAvg = a;
                                    top = i;
                                }
                            }
                        }
                        if (top != -1)
                        {
                            cout << "Top Scorer: " << names[top] << " (ID:" << ids[top] << ")\n";
                            show_student(ids, names, marks, subs, top);
                        }
                        else
                            cout << "No marks entered yet!\n";
                    }
                }
            } while (choice2 != 3);
            break;

        case 3:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice1 != 3);

    return 0;
}