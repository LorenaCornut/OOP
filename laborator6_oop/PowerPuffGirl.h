#pragma once
class PowerPuffGirl
{
public:
    int damage;
    int health;
    const char* name;
    /// functiile virtuale care fac clasa pur abstracta
    ///virtual const char* GetGirl() = 0;
    virtual void SetGirl(const char* name) = 0;
    virtual int GetHealth() = 0;
    virtual int GetDamage() = 0;
};

class ButterCup :public PowerPuffGirl
{
public:
    ButterCup();///constructorul
    const char* GetGirl(); ///ce fetita avem
    void SetGirl(const char* name);
    int GetHealth();
    int GetDamage();
};

class Blossom :public PowerPuffGirl
{
public:
    Blossom();///constructorul
    const char* GetGirl(); ///ce fetita avem
    void SetGirl(const char* name);
    int GetHealth();
    int GetDamage();
};

class Bubbles :public PowerPuffGirl
{
public:
    Bubbles();///constructorul
    const char* GetGirl(); ///ce fetita avem
    void SetGirl(const char* name);
    int GetHealth();
    int GetDamage();
};