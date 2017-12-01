#ifndef BAKERMENUCONTROLLER_H
#define BAKERMENUCONTROLLER_H


class BakerMenuController
{
    public:
        BakerMenuController();
        virtual ~BakerMenuController();
        void Bakermenu();
        string getLocation();

    protected:

    private:
        void init();
};

#endif // BAKERMENUCONTROLLER_H
