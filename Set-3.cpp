#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Question 1 -:
/*
int findSquareFreeFactors(int number)
{
    int count = 0;
    vector<int> factors;

    for(int i = 2; i <= number / 2; i++){
        if(number % i == 0)
            factors.push_back(i);
    }
    factors.push_back(number);
    count = factors.size();

    cout << "No. of factors = " << factors.size() << endl;

    for(int i = 0; i < factors.size(); i++){
        for(int j = 2; j < factors[i]; j++){
            if(j*j == factors[i] || factors[i] % (j*j) == 0){
                count--;
                break;
            }
        }
    }

    return count;
}

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

     int count = findSquareFreeFactors(number);
     cout << "No. of square free factors are " << count;
}
*/

// Question 3 -:
/*
int main()
{
    int size = 10, k, max = 0;
    int arr[10] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};

    cout << "Enter the value of k: ";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max = " << max << endl;

    int i = 1, j = k;
    while (j < size)
    {
        if (arr[j] > max)
            max = arr[j];
        if (arr[i - 1] == max)
        {
            max = arr[i];
            for (int index = i; index < j; index++)
            {
                if (arr[index] > max)
                    max = arr[index];
            }
        }
        cout << "Max = " << max << endl;
        i++;
        j++;
    }
}
*/

// Question 4 -:
/*
bool validString(string str)
{
    int left = 0, right = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '(' && str[i] != ')' && str[i] != '*')
            return false;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (left >= right)
        {
            if (str[i] == '(')
                left++;
            else if (str[i] == ')')
                right++;
        }
        else
            return false;
    }
    if (left == right)
        return true;
    return false;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    if (validString(str) == 1)
        cout << "true";
    else
        cout << "false";
}
*/

// Question 2 -:
/*
int main(){
    int arr[3] = {10, 100, 1000}, size = 3, orEle = 0;
    vector<int> orArr;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            orEle = orEle | arr[j];
            orArr.push_back(orEle);
        }
    }
    for(int i = 0; i < orArr.size(); i++){
        orEle = orEle | orArr[i];
    }
    cout << "Output = " << orEle;
}
*/

// Question 5 -:
/*
int main()
{
    string str;
    stack<char> st;
    int flag = 0;
    cout << "Enter the string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (st.empty())
            {
                flag = true;
                break;
            }
            char top = st.top();
            if ((str[i] == ')' && top == '(') ||
                (str[i] == '}' && top == '{') ||
                (str[i] == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                flag = true;
                break;
            }
        }
        else if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (!st.empty() || flag == 1)
    {
        cout << "The String is invalid";
    }
    else
    {
        cout << "The String is valid";
    }
}
*/

// Question 6 -:
/*
void movecycleRight(string &str)
{
    char temp;
    for (int i = str.length() - 1; i >= 1; i--)
    {
        temp = str[i];
        str[i] = str[i - 1];
        str[i - 1] = temp;
    }
}

void moveCycleLeft(string &str)
{
    char temp;
    for (int i = 0; i < str.length() - 1; i++)
    {
        temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
}

bool checkPalindrome(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int leftPalindrome(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (checkPalindrome(str))
            return count;
        else
        {
            moveCycleLeft(str);
            count++;
        }
    }
    return -1;
}

int rightPalindrome(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (checkPalindrome(str))
            return count;
        else
        {
            movecycleRight(str);
            count++;
        }
    }
    return -1;
}

int main()
{
    int n;
    vector<string> strings;

    cout << "Enter the number of strings: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Enter the string: ";
        cin >> str;
        strings.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        if (checkPalindrome(strings[i]))
        {
            cout << 0 << endl;
        }
        else
        {
            int right = rightPalindrome(strings[i]);
            int left = leftPalindrome(strings[i]);
            if (left < right && (right != -1 || left != -1))
                cout << left << endl;
            else
                cout << right << endl;
        }
    }
}
*/

// Question 7 -:

int main()
{
}