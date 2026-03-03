#include <bits/stdc++.h>
using namespace std;

class RobotPemadam {
    private:
        int jarak;
        string status;

    public:
        int inputSensor(){
            cout << "Masukkan jarak : ";
            cin >> jarak;
            return jarak;
        }
        void inputSensor(int jarak){
            if (jarak > 20){
                status = "Maju Mencari Api";
            }
            else if (jarak <= 20 && jarak > 5){
                status = "UDAH DEKET NIH BRAY";
            }
            else if (jarak <= 5){
                status = "Posisi Tepat! gas semprot kali ya";
            }
        }

        void cetakStatus(int jarak){
            cout << "[Sensor: " << jarak << " cm -> Action : " << status << "]" << endl;
        }
};

int main(){
    int jarakVal;
    RobotPemadam robot;

    while (true){
        jarakVal = robot.inputSensor();

        if (jarakVal == 67){
            break;
        }

        robot.inputSensor(jarakVal);
        robot.cetakStatus(jarakVal);
    }



    cin.get();
    return 0;
}