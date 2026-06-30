

class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();
        int sign = 1;
        long long num = 0;

        // Skip spaces
        while(i < n && s[i] == ' ')
            i++;

        // Check sign
        if(i < n && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+'){
            i++;
        }

        // Read digits
        while(i < n && isdigit(s[i])){

            num = num * 10 + (s[i]-'0');

            if(sign == 1 && num > INT_MAX)
                return INT_MAX;

            if(sign == -1 && -num < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};