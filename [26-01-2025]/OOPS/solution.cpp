// QUESTION : Write a C++ class that demonstrates defining a class, declaring private and public members, creating an object, and using public member functions and data.


// #include<bits/stdc++.h>
// using namespace std;

// // Step 1: Define the class
// class MyClass {
//     // Step 2: Declare private members (data and functions)
//     private:
//         int privateValue;

//     // Step 3: Declare public members (data and functions)
//     public:
//         int publicValue;

//         // Constructor to initialize privateValue
//         MyClass() {
//             privateValue = 0;
//         }

//         // Getter for privateValue
//         int getPrivateValue() {
//             return privateValue;
//         }

//         // Setter for privateValue
//         void setPrivateValue(int value) {
//             privateValue = value;
//         }

//         // Public function
//         void publicFunction() {
//             cout << "Public value: " << publicValue << endl;
//             cout << "Private value (via getter): " << getPrivateValue() << endl;
//         }
// };

// int main() {
//     // Step 4: Create an object of the class
//     MyClass obj;

//     // Step 5: Accessing and changing the object's public data
//     obj.publicValue = 10;

//     // Changing the privateValue using the setter function
//     obj.setPrivateValue(20);

//     // Step 6: Use the object's public functions
//     obj.publicFunction();

//     return 0;
// }