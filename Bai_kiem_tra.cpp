#include <iostream>
#include <cmath>
using namespace std;

class toa_do_2d {
public:
    double x;
    double y;

public:
    toa_do_2d(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }

    double tinh_do_dai(toa_do_2d diem) {
        return sqrt(pow((this->x - diem.x), 2) + pow((this->y - diem.y), 2));
    }
};
class tu_giac: public toa_do_2d {
private:
    toa_do_2d dinh_a, dinh_b, dinh_c, dinh_d;
 double getArea() {
        double AB = dinh_a.tinh_do_dai(dinh_b);
        double BC = dinh_b.tinh_do_dai(dinh_c);
@@ -53,19 +47,6 @@ class tu_giac: public toa_do_2d {
        }
        return false;
    } double getArea() {
        double AB = dinh_a.tinh_do_dai(dinh_b);
        double BC = dinh_b.tinh_do_dai(dinh_c);
@@ -53,19 +47,6 @@ class tu_giac: public toa_do_2d {
        }
        return false;
    }

    double getArea() {
        double AB = dinh_a.tinh_do_dai(dinh_b);
        double BC = dinh_b.tinh_do_dai(dinh_c);
        double CD = dinh_c.tinh_do_dai(dinh_d);
        double DA = dinh_d.tinh_do_dai(dinh_a);
        return AB + BC + CD + DA;
    }
    bool isRectangle() {
        double AB = dinh_a.tinh_do_dai(dinh_b);
        double BC = dinh_b.tinh_do_dai(dinh_c);
        double CD = dinh_c.tinh_do_dai(dinh_d);
        double DA = dinh_d.tinh_do_dai(dinh_a);
        double AC = dinh_a.tinh_do_dai(dinh_c);
        double BD = dinh_b.tinh_do_dai(dinh_d);
        if (AB == CD && BC == DA && AC == BD) {
            return true;
        }
        else if (AB == BC && CD == DA && AC == BD) {
            return true;
        }
        else if (AB == DA && BC == CD && AC == BD) {
            return true;
        }
        return false;
    }

int main() {
    toa_do_2d A(0, 3);
    toa_do_2d B(3, 3);
    toa_do_2d C(3, 1);
    toa_do_2d D(0, 1);

    tu_giac ABCD(A, B, C, D);

    cout << "Chu vi: " << ABCD.getArea() << endl;
    if (ABCD.isRectangle()) {
        cout << "La hinh chu nhat" << endl;
    }
    else {
        cout << "Khong phai la hinh chu nhat" << endl;
    }
    if (ABCD.isSquare()) {
        cout << "La hinh vuong" << endl;
    }
    else {
        cout << "Khong phai la vuong" << endl;
    }
    return 0;
}


