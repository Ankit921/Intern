#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

    vector<string> slurs = {"slur1", "slur2", "slur3"};
    string sentence = "Hey what's up you slur1 you're an ugly slur2 slur3";

    vector<string> words;
    float ratio = 0;
    string cur = "";
    for(int i=0;i<sentence.size();i++){
        if(sentence[i]==' '){
            words.push_back(cur);
            cur = "";
        }else{
            cur += sentence[i];
        }
    }
    words.push_back(cur);
    float count = 0;
    for(auto item: words){
        for(auto word: slurs){
            if(item == word){
                count++;
                break;
            }
        }
    }

    ratio = count/words.size();
    cout << "the given sentence contains " << ratio*100 << "% racial slurs" << endl;
    return 0;
}
// random comment