#ifndef USER_H
#define USER_H


class User
{
    public:
        User();
        virtual ~User();

    protected:

    private:
        string username;
        string password;
        // a, b, s (Admin, Baker, Salesman)
        char typeWork;
};

#endif // USER_H
