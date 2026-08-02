class Solution {
public:
    string interpret(string command) {
        string refined = "";
        for(int i=0;i<command.length();i++){
            if(command[i]=='G') 
                refined+='G';
            else if(command[i]=='(' and command[i+1]!='a'){
                refined+='o';
                i+=1;
            }else if(command[i]=='(' and command[i+1]=='a'){
                refined+="al";
                i+=2;
            }
        }
        return refined;
    }
};