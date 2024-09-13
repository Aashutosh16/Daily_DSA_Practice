#include <vector>
#include <unordered_map>
#include <cstdlib> // For rand()

class RandomizedSet {
private:
    std::vector<int> nums; // To store the elements
    std::unordered_map<int, int> map; // To store the index of each element in nums

public:
    RandomizedSet() {
        // Constructor does not need to do anything specific
    }
    
    bool insert(int val) {
        if (map.find(val) != map.end()) {
            return false; // Value already exists
        }
        nums.push_back(val); // Add to the vector
        map[val] = nums.size() - 1; // Map the value to its index in the vector
        return true;
    }
    
    bool remove(int val) {
        if (map.find(val) == map.end()) {
            return false; // Value does not exist
        }
        int lastElement = nums.back(); // Get the last element
        int idx = map[val]; // Get the index of the element to remove
        
        // Move the last element to the place of the element to remove
        nums[idx] = lastElement;
        map[lastElement] = idx;
        
        // Remove the last element
        nums.pop_back();
        map.erase(val); // Erase from the map
        
        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % nums.size(); // Generate a random index
        return nums[randomIndex]; // Return the element at that index
    }
};
