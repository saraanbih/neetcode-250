class Solution {
public:

    string encode(vector<string>& strs)
    {
        string Text;
        int EncryptionKey=2;
        for(string &str : strs)
        {
          for (int i = 0; i <= str.length(); i++) 
          { 
            str[i] = char((int)str[i] + EncryptionKey); 
          }
          Text+=str+'/'; 
        }
        return Text; 
    }

    vector<string> decode(string s)
    {
        vector<string> Res;
        int EncryptionKey=2;
        string str ="";
        for (int i = 0; i <= s.length(); i++) 
        { 
          if(s[i] != '/')  
          {
            s[i] = char((int)s[i] - EncryptionKey);
            str+=s[i];
          } 
          if(s[i] == '/')
          {
            Res.push_back(str);
            str = "";
          }
        } 
        return Res;
    }
};
