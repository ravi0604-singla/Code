class Solution 
{
public:
    string reverseWords(string s) 
    {
    //   // One method is by the usage of stringstream library in C++
    //   reverse(s.begin(), s.end());
    //   stringstream ss(s);
    //   string word;
    //   s = "";
    //   while(ss>>word)
    //   {
    //       reverse(word.begin(), word.end());   // O(N) time and space complexity 
    //       s+=word+" ";
    //   }
    //   s.pop_back();  // remove the trailing space after the last iteration 
    //   return s;
    int n = s.size();
    int i=0, j=n-1;
    string temp, ans = "";
    while(s[i] == ' ')
    {
        i++;
    }
    while(s[j] == ' ')
    {
        j--;
    }
    while(i<=j)
    {
        while(i<=j && s[j] != ' ')
        {
          temp+= s[j];
          j--;
        } 
        reverse(temp.begin(), temp.end());
        ans += temp + ' ';
        temp ="";
        while(i<=j && s[j] == ' ')
        {
            j--;
        }
    }
        ans.pop_back();
        return ans;
    }
};
