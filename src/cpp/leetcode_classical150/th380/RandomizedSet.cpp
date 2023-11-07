#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class RandomizedSet {
private:
    unordered_map<int, int> map;
    vector<int> arr;
    int size{};
public:
    RandomizedSet() {
        arr.clear();
        map.clear();
        size = 0;
    }
    
    bool insert(int val) {
        if(map.count(val)){
            return false;
        }
        arr.push_back(val);
        map[val] = size;
        size++;
        return true;
    }
    
    bool remove(int val) {
        if(!map.count(val)){
            return false;
        }
        size --;
        int key = map[val];
        int end_val = arr[size];
        swap(arr[key], arr[size]);
        swapMap(key, val, size, end_val);
        arr.pop_back();
        map.erase(val);
        return true;
    }
    
    void swapMap(int l_key, int l_val, int r_key, int r_val){
        map[l_val] = r_key;
        map[r_val] = l_key;
    }

    int getRandom() {
        int pivot = rand() % size;
        return arr[pivot];
    }
};
