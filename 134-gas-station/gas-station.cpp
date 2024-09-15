class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        int current_gas = 0, start_index = 0;

        for (int i = 0; i < gas.size(); ++i) {
            total_gas += gas[i];
            total_cost += cost[i];
            current_gas += gas[i] - cost[i];
            
            // If current gas falls below 0, reset the start station
            if (current_gas < 0) {
                start_index = i + 1;
                current_gas = 0; // Reset current gas for the new start
            }
        }

        // If total gas is less than total cost, it's impossible to complete the circuit
        if (total_gas < total_cost) {
            return -1;
        }

        return start_index;
    }
};
