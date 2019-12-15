//https://leetcode.com/problems/is-subsequence


bool isSubsequence(char * t, char * s)
{
    int a=strlen(s),b=strlen(t);
    int i=0,j=0;
    while(i<a && j<b)
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
            
    }
    if(j==b)
        return true;
    return false;
}



