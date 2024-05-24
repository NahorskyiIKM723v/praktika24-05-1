#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Book {
private:
    string title;
    string author;
    string genre;
    int year;
 public:
    Book() : title(""), author(""), genre(""), year(0) {}

    Book(string t, string a, string g, int y) : title(t), author(a), genre(g), year(y) {}

    void setTitle(const string& t) {
        title = t;
    }

    void setAuthor(const string& a) {
        author = a;
    }

    void setGenre(const string& g) {
        genre = g;
    }

    void setYear(int y) {
        year = y;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getGenre() const {
        return genre;
    }

    int getYear() const {
        return year;
    }

    void printInfo() const {
        cout << "Назва: " << title << "\n"
            << "Автор: " << author << "\n"
            << "Жанр: " << genre << "\n"
            << "Рік видання: " << year << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Book book("Кобзар", "Тарас Шевченко", "Поезія", 1840);
    book.printInfo();
    book.setTitle("Літо у піонерській краватці");
    book.setAuthor("К. Селіванова, О. Малісова");
    book.setGenre("Роман");
    book.setYear(2016);
    book.printInfo();

    return 0;
}
