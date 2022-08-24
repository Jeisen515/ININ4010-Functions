#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

float geometric_mean(vector<float> dataVector); // Calculates the geometric mean of a vector of integers
float harmonic_mean(vector<float> dataVector); // Calculates the harmonic mean of a vector of integers
float arithmetic_mean(vector<float> dataVector); // Calculates the arithmetic mean of a vector of integers
float medianFunction(vector<float> dataVector); // Calculates the median of a vector of integers
float mode(vector<float> dataVector); // Calculates the mode of a vector of integers
float standard_deviation(vector<float> dataVector); // Calculates the standard deviation of a vector of integers
float variance(vector<float> dataVector); // Calculates the variance of a vector of integers
float range(vector<float> dataVector); // Calculates the range of a vector of integers
float midrange(vector<float> dataVector); // Calculates the midrange of a vector of integers
float midrange_absolute(vector<float> dataVector); // Calculates the midrange absolute of a vector of integers

vector<float> bubbleSort(vector<float> dataVector); // Sorts a vector of integers using bubble sort


int main()
{
    vector<float> dataVector; // Vector of integers
    int dataSize = 0; // Size of the vector

    cout << "Enter the number of elements in the vector: ";
    cin >> dataSize;
    cout << "Enter the elements of the vector: ";

    for (int i = 0; i < dataSize; i++)
    {
        int x;
        cin >> x;
        dataVector.push_back(x);
    }

    cout << "The geometric mean of the vector is: " << geometric_mean(dataVector) << endl;
    cout << "The harmonic mean of the vector is: " << harmonic_mean(dataVector) << endl;
    cout << "The arithmetic mean of the vector is: " << arithmetic_mean(dataVector) << endl;
    cout << "The median of the vector is: " << medianFunction(dataVector) << endl;
    cout << "The mode of the vector is: " << mode(dataVector) << endl;
    cout << "The standard deviation of the vector is: " << standard_deviation(dataVector) << endl;
    cout << "The variance of the vector is: " << variance(dataVector) << endl;
    cout << "The range of the vector is: " << range(dataVector) << endl;
    cout << "The midrange of the vector is: " << midrange(dataVector) << endl;
    cout << "The midrange absolute of the vector is: " << midrange_absolute(dataVector) << endl;

    return 0;

vector<float> bubbleSort(vector<float> dataVector)
{
    int size = dataVector.size();

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (dataVector[j] > dataVector[j + 1])
            {
                int temp = v[j];
                dataVector[j] = dataVector[j + 1];
                dataVector[j + 1] = temp;
            }
        }
    }
    return v;
}

float geometric_mean(vector<float> dataVector){ // Calculates the geometric mean of a vector of integers
    
    float sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += dataVector[i];
    }
    return pow(sum, 1/dataVector.size());
}

float harmonic_mean(vector<float> dataVector){ // Calculates the harmonic mean of a vector of integers
    
    float sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += 1/dataVector[i];
    }
    return dataVector.size()/sum;
}

float arithmetic_mean(vector<float> dataVector){ // Calculates the arithmetic mean of a vector of integers
    
    float sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += dataVector[i];
    }
    return sum/dataVector.size();
}

float medianFunction(vector<float> dataVector){ // Calculates the median of a vector of integers
    
    sort(dataVector.begin(), dataVector.end());
    if(dataVector.size() % 2 == 0){
        return (dataVector[dataVector.size()/2] + dataVector[dataVector.size()/2 - 1])/2;
    }
    else{
        return dataVector[dataVector.size()/2];
    }
}

float mode(vector<float> dataVector){ // Calculates the mode of a vector of integers
    
    int maxCount = 0;
    float mode = 0;
    for(int i = 0; i < dataVector.size(); i++){
        int count = 0;
        for(int j = 0; j < dataVector.size(); j++){
            if(dataVector[i] == dataVector[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            mode = dataVector[i];
        }
    }
    return mode;
}

float standard_deviation(vector<float> dataVector){ // Calculates the standard deviation of a vector of integers
    
    float mean = arithmetic_mean(dataVector);
    float sum = 0;
    for(int i = 0; i < dataVector.size(); i++){
        sum += pow(dataVector[i] - mean, 2);
    }
    return sqrt(sum/dataVector.size());
}

float variance(vector<float> dataVector){ // Calculates the variance of a vector of integers
    
    float mean = arithmetic_mean(dataVector);
    float sum = 0;
    for(int i = 0; i < dataVector.size(); i++){
        sum += pow(dataVector[i] - mean, 2);
    }
    return sum/dataVector.size();
}

float range(vector<float> dataVector){ // Calculates the range of a vector of integers
    
    float min = dataVector[0];
    float max = dataVector[0];
    for(int i = 0; i < dataVector.size(); i++){
        if(dataVector[i] < min){
            min = dataVector[i];
        }
        if(dataVector[i] > max){
            max = dataVector[i];
        }
    }
    return max - min;
}

float midrange(vector<float> dataVector){ // Calculates the midrange of a vector of integers
    
    float min = dataVector[0];
    float max = dataVector[0];
    for(int i = 0; i < dataVector.size(); i++){
        if(dataVector[i] < min){
            min = dataVector[i];
        }
        if(dataVector[i] > max){
            max = dataVector[i];
        }
    }
    return (max + min)/2;
}

float midrange_absolute(vector<float> dataVector){ // Calculates the midrange absolute of a vector of integers
    
    float min = dataVector[0];
    float max = dataVector[0];
    for(int i = 0; i < dataVector.size(); i++){
        if(dataVector[i] < min){
            min = dataVector[i];
        }
        if(dataVector[i] > max){
            max = dataVector[i];
        }
    }
    return abs(max - min)/2;
    }

}