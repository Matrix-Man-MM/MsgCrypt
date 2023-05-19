/*
#pragma once: This preprocessor directive ensures that the header file is included only once during compilation.

#include statements: This code includes several header files from standard libraries (<string>, <iostream>, <cmath>, <cstdlib>, <cstring>, <ctime>, <sstream>, <vector>) and the wxWidgets library (<wx/wx.h>). 
These header files provide declarations for various functions, classes, and data types used in this class.

class Main : public wxFrame: This line defines a class named "Main" that is derived from the wxFrame class. 
It indicates that the "Main" class represents a window in the wxWidgets framework.

public:: This keyword specifies that the following members of the class will have public access.

Main();: This is the declaration of the constructor for the "Main" class.

~Main();: This is the declaration of the destructor for the "Main" class.

wxTextCtrl* msgBox = nullptr;: This line declares a pointer variable named "msgBox" of type wxTextCtrl*. 
It is initialized with the value nullptr, indicating that it currently points to no object. 
This variable is likely intended to hold a pointer to a text control widget in the main window.

wxButton* encryptBtn = nullptr;: This line declares a pointer variable named "encryptBtn" of type wxButton*. 
It is initialized with the value nullptr, indicating that it currently points to no object. 
This variable is likely intended to hold a pointer to a button widget in the main window.

std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";: This line declares a string variable named "base64_chars" and initializes it with a sequence of characters representing the Base64 character set. 
This string is likely used in the encryption process.

void OnButtonClicked(wxCommandEvent& ev);: This is the declaration of a member function named "OnButtonClicked". 
It takes a reference to a wxCommandEvent object as a parameter. This function is likely an event handler for a button click event.

std::string Encrypt(std::string text, int e, int n);: This is the declaration of a member function named "Encrypt". 
It takes a string parameter named "text" and two integer parameters named "e" and "n". 
The function is likely responsible for encrypting the provided text using the given encryption parameters.

wxDECLARE_EVENT_TABLE();: This macro is used to declare the event table for the "Main" class. 
It enables event handling and binding in the wxWidgets framework.
*/

#pragma once

#include <wx/wx.h>
#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <sstream>
#include <vector>

class Main : public wxFrame {
public:
	Main();
	~Main();

public:
	wxTextCtrl* msgBox = nullptr;
	wxButton* encryptBtn = nullptr;

	std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

public:
	void OnButtonClicked(wxCommandEvent& ev);
	std::string Encrypt(std::string text, int e, int n);

	wxDECLARE_EVENT_TABLE();
};