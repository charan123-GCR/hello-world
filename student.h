/**  
 * @file Student.h  
 * @brief Defines the Student class.  
 *  
 * This file contains the declaration of the Student class,  
 * which holds basic student information such as name, roll number, and marks.  
 */  

#ifndef STUDENT_H  
#define STUDENT_H  

#include <string>  

/**  
 * @class Student  
 * @brief Represents a student with basic details.  
 */  
class Student {  
private:  
    std::string name;  ///< Name of the student  
    int rollNumber;    ///< Roll number of the student  
    float marks;       ///< Marks obtained by the student  

public:  
    /**  
     * @brief Constructor to initialize a student.  
     * @param n Name of the student.  
     * @param r Roll number.  
     * @param m Marks obtained.  
     */  
    Student(const std::string &n, int r, float m);  

    /**  
     * @brief Gets the student's name.  
     * @return Name of the student.  
     */  
    std::string getName() const;  

    /**  
     * @brief Gets the student's roll number.  
     * @return Roll number.  
     */  
    int getRollNumber() const;  

    /**  
     * @brief Gets the student's marks.  
     * @return Marks obtained.  
     */  
    float getMarks() const;  
};  

#endif // STUDENT_H  
