//
//  main.cpp
//  Vlad_gandon
//
//  Created by Alexey on 17.06.2020.
//  Copyright © 2020 Alexey. All rights reserved.
//

//dop comment for commit

#include <iostream>
#include <time.h>

using namespace std;

int count = 0;

class Human
{
public:
    void BeAHuman()
    {
        cout << "I'm Human!" << endl;
    }
};

class Gandon
{
public:
    void BeAJerk()
    {
        cout << "And I'm Jerk!\n" << endl;
    }
};

class Day
{
public:
    void MeetTeacher(string teacher, bool succes)
    {
        if (teacher == Assihmin)
        {
            cout << "Vlad: It's ASSihmin! Blya, time to run!\n" << endl;
            
            if (succes) cout << "Yeah, ya sbezhal!!!" << endl;
            if (!succes) cout << "Blya, it's my new nauchruk" << endl;
            
            ::count++;
        }
        
        if (teacher == Volygov)
        {
            cout << "Volygov: Hello, everybody, next lession by next door\n" << endl;
            cout << "Vlad: Yes, Black Lord!\n" << endl;
            
            cout << "Idet ekzamen\n" << endl;
            
            if (succes) cout << "Volygov: You got A" << endl;
            if (!succes) cout << "Vlad: Blya, y menya F" << endl;
            
            ::count++;
        }
        
        if (teacher == fizruk)
        {
            cout << "fizruk: 1000 prisedayniy bez dyhania\n" << endl;
            cout << "Vlad: FUCK!!!!!!!!\n" << endl;
            
            cout << "fizruk: Slish, y tebya est dolgi?!\n" << endl;
            
            if (succes) cout << "fizruk: Nu ladna, huy s toboi, idi" << endl;
            if (!succes) cout << "fizruk: Ne pizdi, y tebya lyzi" << endl;
            
            ::count++;
        }
    }
    
    void TimeToHavat(bool succes)
    {
        cout << "Vlad: ya progolodalsya, go to stolovaya\n" << endl;
        
        if (succes) cout << "Vlad: mmmmmmm, pizzaaaaaaaa" << endl;
        if (!succes) cout << "Vlad: Blya, opyat ona vse eated" << endl;
        
        ::count++;
    }
    
    void SleepOnPara(bool succes)
    {
        cout << "Vlad usnul na parte" << endl;
        
        if (succes)
        {
            cout << "Vlad: fuh, prepod ne zametil\n" << endl;
            cout << "Vlad: mmmmmm, horoshiy son pro gachi" << endl;
        }
        
        if (!succes)
        {
            cout << "Vlad: Blya, prepod yvidel\n" << endl;
            cout << "prepod: Skolko budet √63?" << endl;
            cout << "prepod: seravno nepravilno otetish, dva\n" << endl;
            
            cout << "Vlad: Blya, y menya dva, son toze gavno byl" << endl;
        }
        
        ::count++;
    }
    
private:
    string Assihmin = "Assihmin";
    string Volygov = "Volygov";
    string fizruk = "fizruk";
};

class Night
{
public:
    void PlayDota(bool succes)
    {
        cout << "It's time to play!" << endl;
        
        if (succes) cout << "Vlad: Good katka, good team" << endl;
        if (!succes) cout << "Vlad: Blya, opyat raki" << endl;
        
        ::count++;
    }
    
    void Jerk(bool succes)
    {
        cout << "Mmmmmm, pornhub......" << endl;
        
        if (succes) cout << "Vlad: Good gay porn" << endl;
        if (!succes) cout << "Vlad: Fu, opyat devki" << endl;
        
        ::count++;
    }
    
    void Sleep(bool succes)
    {
        cout << "Vlad: sha polezu nemnogo...." << endl;
        
        if (succes) cout << "Vlad: Fuh, chut ne usnul" << endl;
        if (!succes) cout << "Vlad: Blya, ya usnul, suka" << endl;
        
        ::count++;
    }
};

class Vlad : public Human, public Gandon, public Day, public Night
{
public:
    void BeAVlad()
    {
        cout << "I'm Vlad" << endl;
    }
    
    void im_not_ilness()
    {
        cout << "HP: " << current_hp << endl;
    }
    
    void lifeStatus()
    {
        cout << "I'm gay, grawing hairs on ass\n" << endl;
    }
    
    void GetStatus(bool succes)
    {
        if (!succes) cout << "Dickless" << endl;
        if (succes) {
            cout << "You meet a Veronica" << endl;
            cout << "Now, you no Dickless" << endl;
        }
        
        ::count++;
    }
    
    float GetVladVolume(float weight, float height, float depth)
    {
        return (weight * height * depth * (current_hp/100));
    }
    
    void BitTheVlad()
    {
        cout << "Vlad: Ohhhh" << endl;
        current_hp -= 10;
        
        ::count++;
    }
    
    void SetVodkaIntoVlad()
    {
        cout << "Vlad: Mmmmmmmmmmmmm, belenkaya" << endl;
        current_hp += 10;
        
        ::count++;
    }
    
    bool Death()
    {
        if (current_hp <= 0)
        {
            cout << "Tebya syel FPMM, ti zdoh" << endl;
            return true;
        }
        
        return false;
    }
    
private:
    int current_hp = 100;
};

int main(int argc, const char * argv[])
{
    Vlad vlad;
    string status;
    
    vlad.BeAVlad();
    vlad.BeAHuman();
    vlad.BeAJerk();
    
    for (;;)
    {
    a:
        
        int a = rand() % 7;
        int ab = rand() % 5;
        int b = rand() % 7;
        int c = rand() % 7;
        int d = rand() % 7;
        int pnipu = rand() % 20;
        bool succes = rand() % 2;
        
        cin >> status;
        cout << "*****************************************\n";
        
        if (::count <= 5)
        {
            if (::count == 0)
            {
                cout << "Seychas den" << endl;
                cout << "*****************************************\n";
            }
            
            if (status == "GetStatus")
            {
                vlad.im_not_ilness();
                vlad.lifeStatus();
                vlad.GetStatus(succes);
            }
            
            else if (status == "GetVolume")
            {
                float w, h, d;
                
                cout << "Set weight, height, depth" << endl;
                
                cin >> w;
                cin >> h;
                cin >> d;
                
                cout << "Current Volume: " << vlad.GetVladVolume(w, h, d) << endl;
            }
            
            else if (status == "GoLeft")
            {
                switch (a)
                {
                    case 0:
                        vlad.MeetTeacher("Assihmin", succes);
                        break;
                        
                    case 1:
                        vlad.MeetTeacher("Volygov", succes);
                        break;
                        
                    case 2:
                        vlad.MeetTeacher("fizruk", succes);
                        break;
                        
                    case 3:
                    {
                        cout << "You find Vodka! Drink it?" << endl;
                        
                        string reshenie;
                        cin >> reshenie;
                        
                        if (reshenie == "da")
                        {
                            vlad.SetVodkaIntoVlad();
                        }
                        
                        if (reshenie == "net")
                            cout << "Nu i huy s toboi" << endl;
                        
                        break;
                    }
                        
                    case 4:
                        cout << "You slepoy mudak" << endl;
                        cout << "Ti spotknylsa ob shnurok" << endl;
                        
                        vlad.BitTheVlad();
                        break;
                        
                    case 5:
                        vlad.SleepOnPara(succes);
                        break;
                        
                    case 6:
                        vlad.TimeToHavat(succes);
                        break;
                        
                    default:
                        cout << "God: Prosto sosi" << endl;
                        break;
                        
                }
            }
            
            else if (status == "GoBack")
            {
                switch (d)
                {
                    case 0:
                        vlad.MeetTeacher("Assihmin", succes);
                        break;
                        
                    case 1:
                        vlad.MeetTeacher("Volygov", succes);
                        break;
                        
                    case 2:
                        vlad.MeetTeacher("fizruk", succes);
                        break;
                        
                    case 3:
                    {
                        cout << "You find Vodka! Drink it?" << endl;
                        
                        string reshenie;
                        cin >> reshenie;
                        
                        if (reshenie == "da")
                            vlad.SetVodkaIntoVlad();
                        
                        if (reshenie == "net")
                            cout << "Nu i huy s toboi" << endl;
                        break;
                    }
                        
                    case 4:
                        cout << "You slepoy mudak" << endl;
                        cout << "Ti spotknylsa ob shnurok" << endl;
                        
                        vlad.BitTheVlad();
                        break;
                        
                    case 5:
                        vlad.SleepOnPara(succes);
                        break;
                        
                    case 6:
                        vlad.TimeToHavat(succes);
                        break;
                        
                    default:
                        cout << "God: Prosto sosi" << endl;
                        break;
                        
                }
            }
            
            else if (status == "GoRight")
            {
                switch (b)
                {
                    case 0:
                        vlad.MeetTeacher("Assihmin", succes);
                        break;
                        
                    case 1:
                        vlad.MeetTeacher("Volygov", succes);
                        break;
                        
                    case 2:
                        vlad.MeetTeacher("fizruk", succes);
                        break;
                        
                    case 3:
                    {
                        cout << "You find Vodka! Drink it?" << endl;
                        
                        string reshenie;
                        cin >> reshenie;
                        
                        if (reshenie == "da")
                            vlad.SetVodkaIntoVlad();
                        
                        if (reshenie == "net")
                            cout << "Nu i huy s toboi" << endl;
                        break;
                    }
                        
                    case 4:
                        cout << "You slepoy mudak" << endl;
                        cout << "Ti spotknylsa ob shnurok" << endl;
                        
                        vlad.BitTheVlad();
                        break;
                        
                    case 5:
                        vlad.SleepOnPara(succes);
                        break;
                        
                    case 6:
                        vlad.TimeToHavat(succes);
                        break;
                        
                    default:
                        cout << "God: Prosto sosi" << endl;
                        break;
                }
            }
            
            else if (status == "GoForward")
            {
                switch (c)
                {
                    case 0:
                        vlad.MeetTeacher("Assihmin", succes);
                        break;
                        
                    case 1:
                        vlad.MeetTeacher("Volygov", succes);
                        break;
                        
                    case 2:
                        vlad.MeetTeacher("fizruk", succes);
                        break;
                        
                    case 3:
                    {
                        cout << "You find Vodka! Drink it?" << endl;
                        
                        string reshenie;
                        cin >> reshenie;
                        
                        if (reshenie == "da")
                            vlad.SetVodkaIntoVlad();
                        
                        if (reshenie == "net")
                            cout << "Nu i huy s toboi" << endl;
                        break;
                    }
                        
                    case 4:
                        cout << "You slepoy mudak" << endl;
                        cout << "Ti spotknylsa ob shnurok" << endl;
                        
                        vlad.BitTheVlad();
                        break;
                        
                    case 5:
                        vlad.SleepOnPara(succes);
                        break;
                        
                    case 6:
                        vlad.TimeToHavat(succes);
                        break;
                        
                    default:
                        cout << "God: Prosto sosi" << endl;
                        break;
                }
            }
            
            else if (status == "ExitGame" || vlad.Death()) break;
            
            else
            {
                goto a;
            }
        }
        
        if (::count > 5 && ::count <= 10)
        {
            if (::count == 10) ::count = -1;
            
            if (::count == 6)
            {
                cout << "*****************************************\n";
                cout << "Seychas notch" << endl;
                cout << "*****************************************\n";
            }
            
            if (status == "GetStatus")
            {
                vlad.im_not_ilness();
                vlad.lifeStatus();
                vlad.GetStatus(succes);
            }
            
            else if (status == "GetVolume")
            {
                float w, h, d;
                
                cout << "Set weight, height, depth" << endl;
                
                cin >> w;
                cin >> h;
                cin >> d;
                
                cout << "Current Volume: " << vlad.GetVladVolume(w, h, d) << endl;
            }
            
            else if (status == "Puknut")
            {
                switch (ab)
                {
                    case 0:
                        vlad.Jerk(succes);
                        break;
                        
                    case 1:
                        vlad.PlayDota(succes);
                        break;
                        
                    case 2:
                        vlad.Sleep(succes);
                        break;
                        
                    case 3:
                    {
                        cout << "You find Vodka! Drink it?" << endl;
                        
                        string reshenie;
                        cin >> reshenie;
                        
                        if (reshenie == "da")
                        {
                            vlad.SetVodkaIntoVlad();
                        }
                        
                        if (reshenie == "net")
                            cout << "Nu i huy s toboi" << endl;
                        
                        break;
                    }
                        
                    case 4:
                        cout << "You slepoy mudak" << endl;
                        cout << "Ti spotknylsa ob shnurok" << endl;
                        
                        vlad.BitTheVlad();
                        break;
                        
                    default:
                        cout << "God: Prosto sosi" << endl;
                        break;
                        
                }
            }
            
            else if (status == "ExitGame" || vlad.Death()) break;
            
            else
            {
                goto a;
            }
        }
        
        if (pnipu == 10)
        {
            for (int i = 0; i < 10; i++)
                vlad.BitTheVlad();
            
            vlad.Death();
            
            break;
        }
        
        cout << "*****************************************\n\n";
    }
    
    return 0;
}
