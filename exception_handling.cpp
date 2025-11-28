#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for int exception, 2 for float exception, 3 for string exception: ";
        cin >> choice;

        if (choice == 1)
            throw 10;              // int exception
        else if (choice == 2)
            throw 3.14f;           // float exception
        else if (choice == 3)
            throw string("Error"); // string exception
        else
            throw 'x';             // something unexpected (default handler)
    }

    // ------- Multiple Catch Blocks ---------

    catch (int e) {
        cout << "Caught INT exception: " << e << endl;
    }
    catch (float e) {
        cout << "Caught FLOAT exception: " << e << endl;
    }
    catch (string e) {
        cout << "Caught STRING exception: " << e << endl;
    }

    // ------- DEFAULT CATCH (handles anything else) ---------
    catch (...) {
        cout << "Default Exception Handler: Unknown exception caught!" << endl;
    }

    return 0;
}

