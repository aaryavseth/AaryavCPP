#include <iostream>
using namespace std;

void lengths(string s){
  int l=0;
  for(int i=0; s[i]!='\0';i++){
    l++;
  }
  cout<<"\nThe Length of the Inputted Word/Sentence: "<<l;
}

void afrequency(string s, char a){
  int ctrA=0;
  int j;
  for(j=0;s[j]!='\0';j++){
    if (tolower(s[j])==tolower(a))
      ctrA+=1;
  }
  cout<<"\nThe Frequency of Letter "<<a<<" in the Given String: "<<ctrA;
}


void vowfrequency(string s){
  int ctrVow=0;
  int j;
  for(j=0;s[j]!='\0';j++){
    if (s[j] == 'A' || s[j] == 'a' || s[j] == 'E' || s[j] == 'e' || s[j] == 'I' || s[j] == 'i' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u' )
      ctrVow+=1;
  }
  cout<<"\nThe Frequency of Vowels in the Statement: "<<ctrVow;
}

string reversestr(string s){
  string temp=s;
  int i=0;
  for(int x=temp.length()-1; x>=0; x--){
    s[i]=temp[x];
    i++;
  }
  return s;
}

// void palindromestr(string s){
//   string temp=s;
//   int i=0;
//   for(int x=temp.length()-1; x>=0; x--){
//     s[i]=temp[x];
//     i++;
//   }
//   if(s==temp){
//     cout<<"The String "<<temp<<" is a Palindrome!";
//   }
//   else{
//     cout<<"The String "<<temp<<" is not a Palindrome!";
//   }
// }

bool palindromecheck(string s){
  int n = s.length();
  for(int i=0;i<n/2;++i){
    if(tolower(s[i])!=tolower(s[n-i-1])){
      return false;
    }
  }
  return true;
}

void stringshift(string s, int n){
    for(int i = 0; i < s.length(); i++){
        int c = int(s[i]);
        c = c + n;
        if(c > 122)
            s[i] = char((c - 122) + 96);
        else if(c > 90 && c < 97)
            s[i] = char((c - 90) + 64);
        else if(c < 65)
            s[i] = char((c - 65) + 91);
        else
            s[i] = char(c);
    }
    cout << "\nEncrypted String: " << s;
}

void lowerstr(string s){
  for(int i=0;  i<s.length(); i++){
    if(s[i]>=65 && s[i]<=90){
      s[i]=char(s[i]+32);
    }
  }  
  cout<<s;
}

void upperstr(string s){
  for(int i=0; i<s.length();i++){
    if(s[i]>=97 && s[i]<=122){
      s[i]=char(s[i]-32);
    }
  }
  cout<<s;
}

void togglestr(string s){
  for(int i=0; i<s.length();i++){
    if(s[i]>=65 && s[i]<=90){
      s[i]=char(s[i]+32);
    }
    else if (s[i]>=97 && s[i]<=122){
      s[i]=char(s[i]-32);
    }
  }
  cout<<s;
}

int main() 
{
  // char s[]="abc+123";
  // string s="abc+123";
  // string s("abc+123");
  // string s;
  // cout<<"Enter Any Sentence/Word: ";
  // getline(cin,s);
  // cout<<s;
  // // Calculate length of string
  // int l=0;
  // for(int i=0; s[i]!='\0';i++){
  //   l++;
  // }
  // cout<<"\nThe Length of the Inputted Word/Sentence: "<<l;


  // int ctrA=0;
  // int j;
  // for(j=0;s[j]!='\0';j++){
  //   if (s[j]=='A' || s[j]=='a')
  //     ctrA+=1;
  // }
  // cout<<"\nThe Frequency of Letter 'a' in the Given String: "<<ctrA;

  // int ctrVow=0;
  // int k;
  // for(k=0;s[k]!='\0';k++){
  //   if (s[j] == 'A' || s[j] == 'a' || s[j] == 'E' || s[j] == 'e' || s[j] == 'I' || s[j] == 'i' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u' ||)
  //     ctrVow+=1;
  // }
  // cout<<"\nThe Frequency of Vowels in the Statement: "<<ctrVow;

while (true)
{
  string a, revst;
  cout<<"\n\n1. Length of a String";
  cout<<"\n2. Frequency of Letter 'a'";
  cout<<"\n3. Frequency of Vowels in Statement";
  cout<<"\n4. Reverse of a String";
  cout<<"\n5. Letter Shifter";
  cout<<"\n6. Lowercase String Maker";
  cout<<"\n7. Uppercase String Maker";
  cout<<"\n8. Toggle String Maker";
  cout<<"\n9. Palindrome String Check";
  cout<<"\n10. Exit";
  cout<<"\nEnter Your Choice: ";
  int g;
  int ch;
  char f;
  cin>>ch;
  cin.get();
  switch(ch)
  {
    case 1:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      lengths(a);
      break;
    case 2:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      cout<<"\nEnter any Letter: ";
      cin>>f;
      afrequency(a,f);
      break;
    case 3:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      vowfrequency(a);
      break;
    case 4:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      revst = reversestr(a);
      cout<<"The Reverse of "<<a<<" is "<<revst;
      break;
    case 5:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      cout<<"\nEnter a Number: ";
      cin>>g;
      stringshift(a,g);
      break;
    case 6:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      lowerstr(a);
      break;
    case 7:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      upperstr(a);
      break;
    case 8:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      togglestr(a);
      break;
    case 9:
      cout<<"\nEnter any String: ";
      getline(cin,a);
      if(palindromecheck(a)){
        cout<<"The String "<<a<<" is a Palindrome!";
      }
      else{
        cout<<"The String "<<a<<" is not a Palindrome!";
      }
      break;
    case 10:
      exit(0);
  }
    
}
}