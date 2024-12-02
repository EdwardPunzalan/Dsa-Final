#include <iostream>

using namespace std;

int main() {
    cout << "==========================================================\n"
            "Welcome to the Major Recommender! \n"
            "Based on the answers you provide, the major that we believe \n"
            "best fits your interests will be provided!\n"
            "========================================================== " << endl;

    string userID = "";
    string temp1;
    cout << "Question 1: What subjects do you enjoy the most?\n"
            "(1) Math and Science\n"
            "(2) Arts and Humanities\n"
            "(3) Business and Finance\n"
            "(4) Technology and Engineering\n"
            "(5) Social Sciences and Psychology\n"
            "(please choose a number between 1-5)\n"
            "==========================================================" << endl;
    while (true) {
        cin >> temp1;
        try {
            if (stoi(temp1) == 1 || stoi(temp1) == 2 || stoi(temp1) == 3 || stoi(temp1) == 4 || stoi(temp1) == 5) {
                userID += temp1;
                break;
            }
            else
                cout << "invalid number, try again: " << endl;

        }
        catch(const std::exception& e) {
            cout << "not a number, try again: " << endl;
        }

    }

    string temp2;
    cout << "Question 2: How would you rate your creativity?\n"
            "(1) Highly creative (I enjoy brainstorming, designing, and creating new things)\n"
            "(2) Moderately creative (I enjoy problem-solving and some level of creative freedom)\n"
            "(3) Neutral (I am fine with either routine or creative work)\n"
            "(4) Low creativity (I prefer structured tasks over creative ones\n)"
            "(please choose a number between 1-4) \n"
            "==========================================================" << endl;
    while (true) {
        cin >> temp2;
        try {
            if (stoi(temp2) == 1 || stoi(temp2) == 2 || stoi(temp2) == 3 || stoi(temp2) == 4) {
                userID += temp2;
                break;
            }
            else
                cout << "invalid number, try again: " << endl;

        }
        catch(const std::exception& e) {
            cout << "not a number, try again: " << endl;
        }

    }

    string temp3;
    cout << "Question 3: What type of tasks excite you the most?\n"
            "(1) Solving logical problems or working with numbers\n"
            "(2) Designing, drawing, or creating visual content\n"
            "(3) Leading teams or managing projects\n"
            "(4) Writing code or working with machines\n"
            "(5) Analyzing human behavior or studying social dynamics\n"
            "(please choose an answer between 1-5)\n"
            "==========================================================" << endl;
    while (true) {
        cin >> temp3;
        try {
            if (stoi(temp3) == 1 || stoi(temp3) == 2 || stoi(temp3) == 3 || stoi(temp3) == 4 || stoi(temp3) == 5) {
                userID += temp3;
                break;
            }
            else
                cout << "invalid number, try again: " << endl;

        }
        catch(const std::exception& e) {
            cout << "not a number, try again: " << endl;
        }

    }

    string temp4;
    cout << "Question 4: How would you describe your interpersonal skills?\n"
            "(1) Excellent (I enjoy collaborating and communicating with others)\n"
            "(2) Good (I enjoy working with people but also value independence)\n"
            "(3) Moderate (I am comfortable with minimal interaction)\n"
            "(4) Low (I prefer working on tasks independently)\n"
            "(please choose an answer between 1-4)\n"
            "==========================================================" << endl;
    while (true) {
        cin >> temp4;
        try {
            if (stoi(temp4) == 1 || stoi(temp4) == 2 || stoi(temp4) == 3 || stoi(temp4) == 4) {
                userID += temp4;
                break;
            }
            else
                cout << "invalid number, try again: " << endl;

        }
        catch(const std::exception& e) {
            cout << "not a number, try again: " << endl;
        }

    }

    string temp5;
    cout << "Question 5: Which of these career goals appeals to you the most?\n"
            "(1) Developing groundbreaking technology\n"
            "(2) Creating artistic works or entertainment\n"
            "(3) Building a successful business\n"
            "(4) Working in healthcare or improving lives\n"
            "(5) Understanding and solving social problems\n"
            "(please choose an answer between 1-5)\n"
            "==========================================================" << endl;
    while (true) {
        cin >> temp5;
        try {
            if (stoi(temp5) == 1 || stoi(temp5) == 2 || stoi(temp5) == 3 || stoi(temp5) == 4 || stoi(temp5) == 5) {
                userID += temp5;
                break;
            }
            else
                cout << "invalid number, try again: " << endl;

        }
        catch(const std::exception& e) {
            cout << "not a number, try again: " << endl;
        }

    }

    cout << userID << endl;


}
