class Solution
{
   public gcdofStrings(String str1, String str2)
{
    if(str1 + str2 != str2 + str1)
      return "";
    return str1.substr(0,gcd(str1.length(), str2.length())
}
};
