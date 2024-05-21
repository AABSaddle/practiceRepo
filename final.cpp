#include <iostream>
#include <string>

using namespace std;

const int maximumTask = 100;

int main() {
    string tasks[maximumTask];
    bool taskCompleted[maximumTask] = {false};
    int taskCount = 0;
    int choice;

    do {
        cout << "\n--- To-Do List Manager V1.5 ---\n";
        cout << "1. Add a Task\n";
        cout << "2. View a Tasks\n";
        cout << "3. Delete a Task\n";
        cout << "4. Mark Task as Complete\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (taskCount < maximumTask) {
                    cout << "Enter the task: ";
                    cin.ignore();
                    getline(cin, tasks[taskCount]);
                    taskCount++;
                    cout << "Task added successfully!\n";
                } else {
                    cout << "Sorry, the task list is full!\n";
                }
                break;
            case 2:
                if (taskCount == 0) {
                    cout << "No tasks added yet!\n";
                } else {
                    cout << "Tasks:\n";
                    for (int i = 0; i < taskCount; ++i) {
                        cout << i + 1 << ". ";
                        if (taskCompleted[i]) {
                            cout << "[Completed] ";
                        }
                        cout << tasks[i] << "\n";
                    }
                }
                break;
            case 3:
                if (taskCount == 0) {
                    cout << "No tasks to delete!\n";
                } else {
                    int taskDelete;
                    cout << "Enter the number associated with the task to delete: ";
                    cin >> taskDelete;
                    if (taskDelete >= 1 && taskDelete <= taskCount) {
                        for (int i = taskDelete - 1; i < taskCount - 1; ++i) {
                            tasks[i] = tasks[i + 1];
                            taskCompleted[i] = taskCompleted[i + 1];
                        }
                        taskCount--;
                        cout << "Task deleted successfully!\n";
                    } else {
                        cout << "Invalid number!\n";
                    }
                }
                break;
            case 4:
                if (taskCount == 0) {
                    cout << "No tasks to mark as complete!\n";
                } else {
                    int taskComplete;
                    cout << "Enter the number associated with the task to mark as complete: ";
                    cin >> taskComplete;
                    if (taskComplete >= 1 && taskComplete <= taskCount) {
                        taskCompleted[taskComplete - 1] = true;
                        cout << "Task marked as complete!\n";
                    } else {
                        cout << "Invalid number!\n";
                    }
                }
                break;
            case 5:
                cout << "Exiting program, please come again!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}