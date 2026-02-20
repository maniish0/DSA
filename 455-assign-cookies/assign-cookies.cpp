class Solution {
public:
    // Function to find the maximum number of content students
    int findContentChildren(vector<int>& student, vector<int>& cookie) {
        // Sort both arrays to apply the greedy strategy
        sort(student.begin(), student.end());
        sort(cookie.begin(), cookie.end());

        int studentIndex = 0; 
        int cookieIndex = 0;  

        // Try to assign cookies until any one list is fully processed
        while (studentIndex < student.size() && cookieIndex < cookie.size()) {
            // If the cookie satisfies the student's greed
            if (cookie[cookieIndex] >= student[studentIndex]) {
                studentIndex++; 
            }
            // Move to next cookie in both cases
            cookieIndex++; 
        }

        // Number of students satisfied is equal to studentIndex
        return studentIndex;
    }
};