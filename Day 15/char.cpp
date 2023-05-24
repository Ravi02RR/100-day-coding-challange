class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        const int size = 128;

        int fors[size] = {0};
        int fort[size] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            char S = s[i];
            char T = t[i];

            if (fors[S] != fort[T])
                return false;

            fors[S] = i + 1;
            fort[T] = i + 1;
        }

        return true;
    }
};