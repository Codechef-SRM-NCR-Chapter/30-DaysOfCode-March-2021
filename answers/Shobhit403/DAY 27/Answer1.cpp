#include <iostream>
#include <vector>
std::vector<int> circular_array_rotation(const std::vector<int>& array, int num_of_rotations, const std::vector<int>& indices_to_check) 
{
    int arr_size = array.size();
    while (num_of_rotations > arr_size)
    {
        num_of_rotations = num_of_rotations - arr_size;
    }
    std::vector<int> new_array;
    for (int i = arr_size - num_of_rotations; i < arr_size; ++i)
    {
        new_array.push_back(array[i]);
    }
    for (int i = 0; i < arr_size - num_of_rotations; ++i)
    {
        new_array.push_back(array[i]);
    }
    std::vector<int> res;
    for(int i = 0; i < indices_to_check.size(); ++i)
    {
        int idx = indices_to_check[i];
        int val = new_array[idx];
        res.push_back(val);
    }   
    return res;
}
int main()
{
    int num_of_elements, num_of_rotations, num_of_indices_to_check;
    std::cin >> num_of_elements >> num_of_rotations >> num_of_indices_to_check;
    std::vector<int> array(num_of_elements);
    std::vector<int> indices_to_check(num_of_indices_to_check);
    for (int i = 0; i < num_of_elements; ++i)
    {
        std::cin >> array[i];
    }    
    for (int i = 0; i < num_of_indices_to_check; ++i)
    {
        std::cin >> indices_to_check[i];
    }
    std::vector<int> result = circular_array_rotation(array, num_of_rotations, indices_to_check);
    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << "\n";
    }
}
