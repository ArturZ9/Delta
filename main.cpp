#include <iostream>
#include <cmath>

using namespace std;


double a,b,c,d,x,z,p,q,delta;
bool test;

int xz() {
    x = (-b-sqrt(delta))/2*a;
    z = (-b+sqrt(delta))/2*a;
    return z,x;
}

int fdelta() {
    delta = b*b - (4*a*c);
    return delta;
}


int koniec() {
    fdelta();
    xz();
    if (a == 1) {
        if (b==1) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 + "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 + "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 + "<<"x +"<<c<<endl;
        }
        else if(b==-1){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 - "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 - "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 - "<<"x +"<<c<<endl;
        }
        else if (b==0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 +"<<c<<endl;
        }
        else if ( b<0) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 - "<<-b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 - "<<-b<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 - "<<-b<<"x +"<<c<<endl;
        }
        else if (b>0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 + "<<b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 + "<<b<<"x -"<<c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x^2 + "<<"x +"<<b<<c<<endl;
        }
    }
    else if (a==0) {
        if (b==1) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x +"<<c<<endl;
        }
        else if(b==-1){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x +"<<c<<endl;
        }
        else if (b==0){
            if (c==0) cout<<"Nie ma takiej funkcji"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<c<<endl;
        }
        else if ( b<0) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-b<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-b<<"x +"<<c<<endl;
        }
        else if (b>0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<b<<"x -"<<c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"x +"<<b<<c<<endl;
        }
    }
    else if (a == -1) {
        if (b==1) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 + "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 + "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 + "<<"x +"<<c<<endl;
        }
        else if(b==-1){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 - "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 - "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 - "<<"x +"<<c<<endl;
        }
        else if (b==0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 +"<<c<<endl;
        }
        else if ( b<0) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 - "<<-b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 - "<<-b<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 - "<<-b<<"x +"<<c<<endl;
        }
        else if (b>0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 + "<<b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 + "<<b<<"x -"<<c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-x^2 + "<<"x +"<<b<<c<<endl;
        }
    }else if (a<0) {
        if (b==1) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 + "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 + "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 + "<<"x +"<<c<<endl;
        }
        else if(b==-1){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 - "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 - "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 - "<<"x +"<<c<<endl;
        }
        else if (b==0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 +"<<c<<endl;
        }
        else if ( b<0) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 - "<<-b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 - "<<-b<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 - "<<-b<<"x +"<<c<<endl;
        }
        else if (b>0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 + "<<b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 + "<<b<<"x -"<<c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<"-"<<-a<<"x^2 + "<<"x +"<<b<<c<<endl;
        }
    }else if (a>0) {
        if (b==1) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 + "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 + "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 + "<<"x +"<<c<<endl;
        }
        else if(b==-1){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 - "<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 - "<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 - "<<"x +"<<c<<endl;
        }
        else if (b==0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 +"<<c<<endl;
        }
        else if ( b<0) {
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 - "<<-b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 - "<<-b<<"x -"<<-c<<endl;
            else cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 - "<<-b<<"x +"<<c<<endl;
        }
        else if (b>0){
            if (c==0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 + "<<b<<"x"<<endl;
            else if (c<0) cout<<"W postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 + "<<b<<"x -"<<c<<endl;
            else cout<<"aaaaW postaci ogolnej wzor bedzie wygladac: "<<a<<"x^2 + "<<b<<"x +"<<c<<endl;
        }
    }
    cout<<"W postaci iloczynowej wzor bedzie wygladac: "<<a<<"( x "<<"- "<<x<<" )( x"<<"- "<<z<<" )\n";
    cout<<"W postaci kanonicznej wzor bedzie wygladac: "<<a<<"( x "<<"- "<<p<<" )^2 + "<<q<<endl;
    cout<<"Wierzcholek znajduje sie na wspolrzednych ( "<<p<<" ; "<<q<<" )"<<endl;
    cout<<"Miejsce przeciecia z osia y znajduje sie na wsporzednych ( 0 ; "<<c<<" )"<<endl;
    if (delta<0) {
        cout << "Brak miejsc zerowych"<<endl;
        return 0;
    } else if (delta==0) {
        cout<< "Jedno miejsc wynosi "<<x<<endl;
        return 0;
    } else {
        cout<< "Dwa miejsc wynosza "<<x<<" i "<<z<<endl;
        return 0;
    }
}


int ogolna() {
    cout << "Wpisz a b c z postaci ogolnej" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    p = -(b/2*a);
    q =  c - (b*b/4*a);
    koniec();
}
int kanoniczna() {
    cout << "Wpisz a p q z postaci kanonicznej" << endl;
    cin >> a;
    cin >> p;
    cin >> q;
    b = -2*a*p;
    c= a*p*p+q;
    koniec();
}
int iloczynowa() {
    cout << "Wpisz a x1 x2 z postaci iloczynowej" << endl;
    cin >> a;
    cin >> x;
    cin >> z;
    b = -a*(x+z);
    c = a*(x*z);
    p = -(b/2*a);
    q =  c - (b*b/4*a);
    koniec();

}

int main() {
    do {
        test = false;
        cout<<"\n1. Postac Ogolna\n2. Postac Kanoniczna\n3. Postac Iloczynowa\nWybierz z czego chcesz: ";
        cin>>d;
        if (d==1) {
            ogolna();
        } else if (d==2) {
            kanoniczna();
        } else if (d==3) {
            iloczynowa();
        } else {
            test = true;
        }
    } while (test);


}


