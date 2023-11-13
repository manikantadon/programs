class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> myVectorForFizzBuzz;
        for(int i=1; i<=n; i++){
            if(i%3==0&&i%5==0){
                myVectorForFizzBuzz.push_back("FizzBuzz");
            }
            else if(i%3==0){
                myVectorForFizzBuzz.push_back("Fizz");
            }
            else if(i%5==0){
                myVectorForFizzBuzz.push_back("Buzz");
            }
            else{
                myVectorForFizzBuzz.push_back(to_string(i));
            }
        }
        return myVectorForFizzBuzz;
    }
};