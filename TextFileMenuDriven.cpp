#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void writeToFile() {
    ofstream fout;
    fout.open("story.txt", ios::app);
    string s;
    cout<<"Enter Any String: ";
    getline(cin, s);
    fout<<s<<endl;
    fout.close();
}

void readFromFile() {
    ifstream fin;
    fin.open("story.txt");
    string s;
    while (getline(fin, s)) {
        cout<<s<<endl;
    }
    fin.close();
}

void lettercheck() {
    ifstream fin;
    fin.open("story.txt");
    char letter;
    cout<<"Enter a Letter to Count it's Frequency: ";
    cin>>letter;
    letter= (char) tolower(letter);
    int co=0;
    string s;
    while(getline(fin, s)){
        for (char i : s){
            i= tolower(i);
            if(i==letter){
                co++;
            }
        }
    }
    fin.close();
    cout<<"The Letter "<<letter<<" was in the file "<<co<<" times!\n";
}

void vowelscheck(){
    ifstream fin;
    fin.open("story.txt");
    int vow=0;
    string s;
    while(getline(fin, s)){
        for (char ch : s){
            switch(ch){
                case 'a': case 'e': case 'i': case 'o': case 'u':case 'A': case 'E': case 'I': case 'O': case 'U':
                    vow++;
                    break;
            }
        }
    }
    fin.close();
    cout<<"There Were "<<vow<<" Vowels in the File!\n";
}

void eachvowel(){
    ifstream fin;
    fin.open("story.txt");
    int acount=0; int ecount=0; int icount=0; int ocount=0; int ucount=0;
    string s;
    while(getline(fin, s)){
        for(char ch:s){
            switch(ch){
                case 'a': 
                case 'A': acount++;break;
                case 'e': 
                case 'E': ecount++;break;
                case 'i': 
                case 'I': icount++;break;
                case 'o': 
                case 'O': ocount++;break;
                case 'u': 
                case 'U': ucount++;break;
            }
        }
    }
    fin.close();
    cout<<"\nFrequency of Each Vowel: \n";
    cout<<"A: "<<acount<<endl;
    cout<<"E: "<<ecount<<endl;
    cout<<"I: "<<icount<<endl;
    cout<<"O: "<<ocount<<endl;
    cout<<"U: "<<ucount<<endl;
}
string convertlower(string temp)
{
    string word;
    for (char ch:temp)
        {
            word+=tolower(ch);
        }
    return word;
}

void wordfrequency(){
    ifstream fin;
    fin.open("story.txt");
    string s,word,temp;
    cout<<"Enter a Word to Count It's Frequency: ";
    cin>>word;
    word=convertlower(word);
    // cout<<word<<endl;
    int c=0;
    while(fin>>s){
        s=convertlower(s);
        if(s==word){
            c++;
        }
    }
    fin.close();
    cout<<"The Word "<<word<<" is in the file "<<c<<" times!\n";
}

void readWordbyWord(){
    ifstream fin;
    fin.open("story.txt");
    string word;
    while(fin>>word){
        cout<<word<<endl;
    }
    fin.close();
}

void reverseword(){
    ifstream fin;
    fin.open("story.txt");
    string word;
    while(fin>>word){
        for(int i=word.length()-1; i>=0; i--)
            cout<<word[i];
        cout<<" ";
    }
    fin.close();
}

bool startsWithVowel(const string& word) {
    if (word.empty()) return false;
    char first = tolower(word[0]);
    return first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u';
}

void copypastevowel(){
    ifstream fin;
    fin.open("story.txt");
    ofstream fout;
    fout.open("vowels.txt");
    string word;
    while(fin>>word){
        if(startsWithVowel(word)){
            fout<<word<<endl;
        }
    }
    fin.close();
    fout.close();
    cout<<"Words Starting With a Vowel Have Been Moved!\n";
}

void findAndReplace() {
    ifstream fin("story.txt");
    ofstream fout("temp.txt");

    string wordFind, wordReplace, word;
    cout<<"Enter the Word to Find: ";
    cin>>wordFind;
    cout<<"Enter the Word to Replace it With: ";
    cin>>wordReplace;

    while(fin>>word){
        if(word==wordFind){
            fout<<wordReplace<<" ";
        }
        else{
            fout<<word<<" ";
        }
    }
    fin.close();
    fout.close();

    remove("story.txt");
    rename("temp.txt","story.txt");
    
}

void numberOfwords() {
    ifstream fin("story.txt");
    string word;
    int wordCount=0;
    while(fin>>word){
        wordCount++;
    }
    fin.close();
    cout<<"The File Contains "<<wordCount<<" Words.\n";
}

void nooflines(){
    ifstream fin("story.txt");
    string lines;
    int line=0;
    while(getline(fin,lines))
        {
            cout<<lines<<endl;
            line++;
        }
    cout<<"T"<<line;
    fin.close();
}

void LineStartLetter() {
    ifstream fin("story.txt");
    char letter;
    cout<<"Enter the Letter: ";
    cin>>letter;
    letter = tolower(letter);

    string line;
    while(getline(fin,line)) {
        if(tolower(line[0])==letter){
            cout<<line<<endl;
        }
    }

    fin.close();
}

void LineWithLetter() {
    ifstream fin("story.txt");
    char letter;
    cout<<"Enter the Letter: ";
    cin>>letter;
    letter=tolower(letter);

    string line;
    bool found=false;
    while(getline(fin,line)){
        int counter=0;
        for(char ch:line){
            if(tolower(ch)==letter){
                counter++;
            }
        }
        if (counter>0){
            cout<<"Line: "<<line<<endl;
            cout<<"The Letter "<<letter<<" Is There "<<counter<<" Times in This Line!\n\n";
            found=true;
        }
    }
    fin.close();
    if(!found){
        cout<<"No Lines Have the Letter "<<letter<<endl;
    }
    
    
}

int main() {
    int ch;
    do {
        cout<<"\nMenu:\n";
        cout<<"1. Write to file\n";
        cout<<"2. Read from file\n";
        cout<<"3. Frequency of a given letter\n";
        cout<<"4. Frequency of vowels in the file\n";
        cout<<"5. Frequency of each vowel in the file\n";
        cout<<"6. Frequency of a Word in the File\n";
        cout<<"7. Read From File Word by Word\n";
        cout<<"8. Read from File Word by Word but Display Word Spelling in Reverse\n";
        cout<<"9. Copy/Paste Words Starting With Vowel to New File\n";
        cout<<"10. Find and Replace Word in File\n";
        cout<<"11. Count the Number of Words in the File\n";
        cout<<"12. Number of Lines in the File\n";
        cout<<"13. Line Beggining With a Certain Letter\n";
        cout<<"14. Line Containing a Certain Letter\n";
        cout<<"15. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        cin.get();
        switch (ch) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                lettercheck();
                break;
            case 4:
                vowelscheck();
                break;
            case 5:
                eachvowel();
                break;
            case 6:
                wordfrequency();
                break;
            case 7:
                readWordbyWord();
                break;
            case 8:
                reverseword();
                break;
            case 9:
                copypastevowel();
                break;
            case 10:
                findAndReplace();
                break;
            case 11:
                numberOfwords();
                break;
            case 12:
                nooflines();
                break;
            case 13:
                LineStartLetter();
                break;
            case 14:
                LineWithLetter();
                break;
            case 15:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (ch!=15);

    return 0;
}
