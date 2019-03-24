#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
public:
        explicit GradeBook(string coursename , string teachername)
        {
            setCourseName(coursename);
            setTeacherName(teachername);
        }
        void setCourseName(string coursename)
        {
            CourseName = coursename;
        }
        string  getCourseName() const
        {
            return CourseName;
        }
    void setTeacherName(string teachername)
{
    TeacherName = teachername;
}
    string getTeacherName() const
    {
        return TeacherName;
    }
    void displayMessage() const

{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << "\nThis Course is presented by " << getTeacherName() << endl;

}
    private:
        string CourseName;
        string TeacherName;
};
int main()
{
    GradeBook gradebook( "C++ Programming","Shi Bo");

}
