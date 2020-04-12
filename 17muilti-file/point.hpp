class point {
    public:
    point(int x=0, int y =0):x(x),y(y){}
    int getX(){return x;}
    int getY(){return y;}
    point(const point &p);
    ~point(){count --;}
    void showCount();
    private:
    int x, y;
    static int count;
};
