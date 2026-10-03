#pragma once

#include<iostream>
#include<string>
#include<vector>

using namespace std;
class clsString {
private:
    string _value;
public:
    clsString() {
        _value = "";
    }
    clsString(string value) {
        _value = value;
    }
    void SetValue(string value) {
        _value = value;
    }
    string GetValue() {
        return _value;
    }

    // Property-like access is not supported in standard C++, use getter/setter methods instead.
#ifdef _MSC_VER // Microsoft Visual C++
    __declspec(property(get = GetValue, put = SetValue)) string
        Value;
#endif

    static short CountWords(string S1)
    {

        string delim = " "; // delimiter  
        short Counter = 0;
        short pos = 0;
        string sWord; // define a string variable  

        // use find() function to get the position of the delimiters  
        while ((pos = S1.find(delim)) != std::string::npos)
        {
            sWord = S1.substr(0, pos); // store the word   
            if (sWord != "")
            {
                Counter++;
            }

            //erase() until positon and move to next word.
            S1.erase(0, pos + delim.length());
        }

        if (S1 != "")
        {
            Counter++; // it counts the last word of the string.
        }

        return Counter;

    }

    short CountWords()
    {
        return CountWords(_value);
    };

    static void PrintFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;
        cout << "\nFirst letters of this string: \n";
        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter)
            {
                cout << S1[i] << endl;
            }
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }
    }
    void PrintFirstLetterOfEachWord()
    {
        PrintFirstLetterOfEachWord(_value);
    }


    static string UpperFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;
        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter)
            {
                S1[i] = toupper(S1[i]);
            }
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }
        return S1;

    }
    string UpperFirstLetterOfEachWord()
    {
        _value = UpperFirstLetterOfEachWord(_value);
        return _value;
    }

    static string LowerFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;
        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter)
            {
                S1[i] = tolower(S1[i]);
            }
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }
        return S1;
    }
    string LowerFirstLetterOfEachWord()
    {
        _value = LowerFirstLetterOfEachWord(_value);
        return _value;
    }


    static string UpperAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = toupper(S1[i]);
        }
        return S1;
    }
    string UpperAllString()
    {
        _value = UpperAllString(_value);
        return _value;
    }
    static string LowerAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = tolower(S1[i]);
        }
        return S1;
    }
    string LowerAllString()
    {
        _value = LowerAllString(_value);
        return _value;
    }
    static char InvertLetterCase(char char1)
    {
        return isupper(char1) ? tolower(char1) : toupper(char1);
    }
    char InvertLetterCase()
    {
        return InvertLetterCase(_value[0]);
    }
    static string InvertedAllLetterString(string s1) {
        for (int i = 0; i < s1.length(); i++) {
            s1[i] = InvertLetterCase(s1[i]);
        }
        return s1;
    }
    string InvertedAllLetterString() {
        _value = InvertedAllLetterString(_value);
        return _value;
    }
    static short countCapitalLetters(string s1)
    {
        short count = 0;
        for (short i = 0; i < s1.length(); i++) {
            if (isupper(s1[i])) {
                count++;
            }

        }
        return count;
    }
    short countCapitalLetters() {
        return countCapitalLetters(_value);
    }
    static short countLowerLetters(string s1)
    {
        short count = 0;
        for (short i = 0; i < s1.length(); i++) {
            if (islower(s1[i])) {
                count++;
            }

        }
        return count;
    }
    short countLowerLetters() {
        return countLowerLetters(_value);
    }
    static short countLetter(string s1, char letter)
    {
        short count = 0;
        for (short i = 0; i < s1.length(); i++) {
            if (s1[i] == letter) {
                count++;
            }
        }
        return count;
    }

    static short countLetter(string s1, char letter, bool MatchCase = true) {
        short count = 0;
        for (short i = 0; i < s1.length(); i++) {
            if (MatchCase) {
                if (s1[i] == letter) {
                    count++;
                }
            }
            else {
                if (tolower(s1[i]) == tolower(letter)) {
                    count++;
                }
            }
        }
        return count;
    }
    short countLetter(char letter) {
        return countLetter(_value, letter, true);
    }
    short countLetter(char letter, bool MatchCase = true) {
        return countLetter(_value, letter, MatchCase);
    }
    static bool isVowel(char letter) {
        return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
    }
    void isVowel() {
        if (isVowel(_value[0])) {
            cout << "YES:this letter is vowel" << endl;
        }
        else {
            cout << "NO:this letter is not vowel" << endl;
        }
    }
    static short countVowel(string s1) {
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (isVowel(s1[i])) {
                count++;
            }
        }
        return count;
    }
    short countVowel() {
        return countVowel(_value);
    }
    static void printALLVowelInString(string s1) {
        for (int i = 0; i < s1.length(); i++) {
            if (isVowel(s1[i])) {
                cout << s1[i] << " ";
            }
        }
    }
    void printALLVowelInString() {
        printALLVowelInString(_value);

    }
    enum enumWathCount { smallLetter = 0, capitalletters, All };
    static short CountLetter(string s1, enumWathCount whathCount = enumWathCount::All) {
        if (whathCount == enumWathCount::All) {
            return s1.length();
        }
        if (whathCount == enumWathCount::capitalletters) {
            return countCapitalLetters(s1);
        }
        return countLowerLetters(s1);
    }

    static void split(string s1, string delim) {
        short pos = 0;
        string swords = "";
        while ((pos = s1.find(delim)) != string::npos) {
            swords = s1.substr(0, pos);
            if (swords != " ") {
                cout << swords << endl;
            }
            s1.erase(0, pos + delim.length());
        }
        if (s1 != " ") {
            cout << s1 << endl;
        }
    }
    void split(string delim) {
        split(_value, delim);
    }
    static short contWordEacheString(string s1, string delim) {
        short count = 0;
        short pos = 0;
        string swords = "";
        while ((pos = s1.find(delim)) != string::npos) {
            swords = s1.substr(0, pos);
            if (swords != "") {
                count++;
            }
            s1.erase(0, pos + delim.length());
        }
        if (s1 != "") {
            count++;
        }
        return count;
    }
    short contWordEacheString(string delim) {
        return contWordEacheString(_value, delim);
    }
    static vector<string>splitVector(string s1, string delim) {
        vector<string>vword;
        short pos = 0;
        string swords = " ";

        while ((pos = s1.find(delim)) != string::npos) {
            swords = s1.substr(0, pos);
            if (swords != "") {
                vword.push_back(swords);
            }
            s1.erase(0, pos + delim.length());
        }
        if (s1 != "") {
            vword.push_back(s1);
        }

        return vword;

    }
    vector<string>VectorOfSplit(string s1) {
        return splitVector(s1, " ");
    }
    static string trimLeft(string s1) {

        for (int i = 1; i <= s1.length() - 1; i++) {
            if (s1[i] != ' ') {
                return s1.substr(i, s1.length() - i);

            }
        }

        return " ";
    }
    static string trimRight(string s1, string delim) {
        for (int i = s1.length(); i >= 0; i--) {
            if (s1[i] != ' ') {
                return s1.substr(0, i + 1);
            }
        }
        return " ";
    }
    static string trim(string s1, string delim) {
        return trimLeft(trimRight(s1, " "));

    }
    string trimLeft(string s1, string delim) {
        return  trimLeft(s1, delim);
    }
    string trimRight(string s1) {
        return trimRight(s1, " ");
    }
    string trim(string s1) {
        return trim(s1, " ");
    }
    static string joinString(vector<string>vjoin, string delim) {
        string s1 = " ";

        for (string& s : vjoin) {
            s1 = s1 + s + delim;
        }
        return s1.substr(0, s1.length() - delim.length());

    }
    void joinstring(vector<string>vjoin, string delim) {
        cout << joinString(vjoin, delim);


    }
    static string joinString(string array[], int lengthe, string delim) {
        string s1 = " ";
        for (int i = 0; i < lengthe; i++) {
            s1 = s1 + array[i] + delim;

        }
        return s1.substr(0, s1.length() - delim.length());
    }
    void printJoinedString(string array[], int lengthe, string delim) {
        cout << joinString(array, lengthe, delim);
    }
    static string reverse_Word(string s1) {
        string s2 = "";
        vector<string>vSplit = splitVector(s1, " ");
        vector<string>::iterator iter = vSplit.end();
        while (iter != vSplit.begin()) {
            --iter;
            s2 += *iter + " ";

        }
        s2 = s2.substr(0, s2.length() - 1);
        return s2;


    }
    void printReverseWord(string s1) {
        cout << reverse_Word(s1);
    }
    static string replaceWordInString(string s1, string old_word, string new_word) {
        short pos = s1.find(old_word);
        while (pos != string::npos) {
            s1 = s1.replace(pos, old_word.length(), new_word);
            pos = s1.find(old_word);
        }

        return s1;
    }
    void print_replaceWord_In_String(string s1, string old_word, string new_word) {
        cout << replaceWordInString(s1, old_word, new_word);

    }
    static  string replaceCustomFunction(string s1, string old_word, string new_word, bool matcheCase = true) {
        vector<string>vstring = splitVector(s1, " ");
        for (string& s : vstring) {
            if (matcheCase) {
                if (s == old_word) {
                    s = new_word;
                }
            }
            else {
                if (UpperAllString(s) == UpperAllString(old_word)) {
                    s = new_word;
                }
            }

        }
        return  joinString(vstring, " ");
    }
    void printReplaceStringWords(string s1, string old_word, string new_word, bool matcheCase = true) {
        cout << replaceCustomFunction(s1, old_word, new_word, matcheCase);

    }
    static void removePunctuation(string s1) {
        string result = "";
        for (char c : s1) {
            if (!ispunct(c)) {
                result += c;
            }
        }
        cout << result << endl;
    }


    void printremovePunct(string s1) {
        removePunctuation(s1);
    }

};