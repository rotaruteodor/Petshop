#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
using namespace std;

class AnimalFood
{
private:

public:
    float stockInKg;
    float pricePerKg;
    string category;
    AnimalFood() {}
};

class RoyalCanin: public AnimalFood
{
private:

public:
    string type;
    string animalType;
    string productBrand;
    RoyalCanin(float _stockInKg = 0, float _pricePerKg = 0, string _type = "default", string _animalType = "default", string _productBrand = "default", string _category = "default")
    {
        if(_stockInKg >= 0)
        {
            stockInKg = _stockInKg;
        }
        if(_pricePerKg >= 0)
        {
            pricePerKg = _pricePerKg;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }
    // RoyalCanin() {}
    RoyalCanin operator-(float cantitate)
    {
        stockInKg = stockInKg - cantitate;
    }

    friend ostream &operator<<( ostream &output, const RoyalCanin &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil(kg): " << R.stockInKg << endl << "Pret per kg" << R.pricePerKg << endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stockInKg) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << pricePerKg) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }
    //to_string(stockInKg)
};


class Pedigree: public AnimalFood
{
private:

public:
    string type;
    string animalType;
    string productBrand;
    Pedigree(float _stockInKg, float _pricePerKg, string _type, string _animalType, string _productBrand, string _category)
    {
        if(_stockInKg >= 0)
        {
            stockInKg = _stockInKg;
        }
        if(_pricePerKg >= 0)
        {
            pricePerKg = _pricePerKg;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }

    Pedigree() {}

    Pedigree operator-(float cantitate)
    {
        stockInKg = stockInKg - cantitate;
    }

    friend ostream &operator<<( ostream &output, const Pedigree &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil(kg): " << R.stockInKg << endl << "Pret per kg" << R.pricePerKg << endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stockInKg) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << pricePerKg) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }
};


class Whiskas: public AnimalFood
{
private:

public:
    string type;
    string animalType;
    string productBrand;
    Whiskas(float _stockInKg, float _pricePerKg, string _type, string _animalType, string _productBrand, string _category)
    {
        if(_stockInKg >= 0)
        {
            stockInKg = _stockInKg;
        }
        if(_pricePerKg >= 0)
        {
            pricePerKg = _pricePerKg;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }

    Whiskas() {};

    friend ostream &operator<<( ostream &output, const Whiskas &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil(kg): " << R.stockInKg << endl << "Pret per kg" << R.pricePerKg << endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stockInKg) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << pricePerKg) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }
};


class AnimalFarmacy
{
private:

public:
    int stock;
    float price;
    string category;
    AnimalFarmacy() {}
};


class Pills: public AnimalFarmacy
{
private:

public:
    string type;
    string animalType;
    string productBrand;

    Pills(int _stock, float _price, string _type, string _animalType, string _productBrand, string _category)
    {
        if(stock>=0)
        {
            stock = _stock;
        }
        if(price >= 0)
        {
            price = _price;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }
    Pills() {}

    friend ostream &operator<<( ostream &output, const Pills &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil: " << R.stock << endl << "Pret" << R.price << endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stock) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << price) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }

};


class Injections: public AnimalFarmacy
{
private:

public:
    string type;
    string animalType;
    string productBrand;
    Injections(int _stock, float _price, string _type, string _animalType, string _productBrand, string _category)
    {
        if(stock>=0)
        {
            stock = _stock;
        }
        if(price >= 0)
        {
            price = _price;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }
    Injections() {}

    friend ostream &operator<<( ostream &output, const Injections &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil: " << R.stock << endl << "Pret" << R.price << endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stock) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << price) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }
};


class AnimalToys
{
private:

public:
    int stock;
    float price;
    string category;
    AnimalToys() {}
};


class Mingi: public AnimalToys
{
private:

public:
    string type;
    string animalType;
    string productBrand;
    Mingi(int _stock, float _price, string _type, string _animalType, string _productBrand, string _category)
    {
        if(stock>=0)
        {
            stock = _stock;
        }
        if(price >= 0)
        {
            price = _price;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }

    Mingi() {}

    friend ostream &operator<<( ostream &output, const Mingi &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil: " << R.stock << endl << "Pret" << R.price<< endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stock) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << price) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }
};


class Frisbee: public AnimalToys
{
private:

public:
    string type;
    string animalType;
    string productBrand;
    Frisbee(int _stock, float _price, string _type, string _animalType, string _productBrand, string _category)
    {
        if(stock>=0)
        {
            stock = _stock;
        }
        if(price >= 0)
        {
            price = _price;
        }
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
    }

    Frisbee() {}

    friend ostream &operator<<( ostream &output, const Frisbee &R )
    {
        output << "Pentru: " << R.animalType << endl << "Tip: " << R.type << endl <<"Stoc disponibil: " << R.stock << endl << "Pret" << R.price << endl;
        return output;
    }

    string getLineOfInfo()
    {
        string StringStock = static_cast<ostringstream*>( &(ostringstream() << stock) )->str();
        string StringPrice = static_cast<ostringstream*>( &(ostringstream() << price) )->str();
        return (productBrand + " " + category + " " + animalType + " " + StringStock + " " + StringPrice + " " + type);
    }
};


class Users
{
private:
    string username;
    string password;
public:
    Users(string _username, string _password)
    {
        username = _username;
        password = _password;
    }
    Users() {}

    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
    string getLineOfInfo()
    {
        return (username + " " + password);
    }
};


class Comanda
{
private:
    int idComanda;
    string username;
    time_t now = time(0);
    tm *ltm = localtime(&now);

    string getCurrentDate()
    {
        return to_string(ltm->tm_mday) + "/" + to_string(1 + ltm->tm_mon) + "/" + to_string(1900 + ltm->tm_year);
    }

    string dataComanda= getCurrentDate();
    string type;
    string animalType;
    string productBrand;
    string category;
    float cantitate;
    float pret;
    float pretTotal;

public:
    Comanda(int _idComanda, string _dataComanda, string _username, string _type, string _animalType, string _productBrand, string _category, float _cantitate, float _pret)
    {
        idComanda = _idComanda;
        dataComanda = _dataComanda;
        username = _username;
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
        cantitate = _cantitate;
        pret = _pret;
        pretTotal = pret*cantitate;
    }

    Comanda(int _idComanda, string _username, string _type, string _animalType, string _productBrand, string _category, float _cantitate, float _pret)
    {
        idComanda = _idComanda;
        username = _username;
        type = _type;
        animalType = _animalType;
        productBrand = _productBrand;
        category = _category;
        cantitate = _cantitate;
        pret = _pret;
        pretTotal = pret*cantitate;
    }

    Comanda() {}
    string getCategory()
    {
        return category;
    }

    float getPretTotal()
    {
        return pretTotal;
    }
    int getIdComanda()
    {
        return idComanda;
    }
    string getDataComanda()
    {
        return dataComanda;
    }

    string getUsername()
    {
        return username;
    }
    string getLineOfInfo()
    {
        string StringPretTotal = static_cast<ostringstream*>( &(ostringstream() << pretTotal) )->str();
        string StringPret = static_cast<ostringstream*>( &(ostringstream() << pret) )->str();
        string StringIdComanda = static_cast<ostringstream*>( &(ostringstream() << idComanda) )->str();
        string StringCantitate = static_cast<ostringstream*>( &(ostringstream() << cantitate) )->str();

        return StringIdComanda + " " + dataComanda + " " + username + " " + type + " " + animalType + " " + productBrand + " " + category + " " + StringCantitate  + " " + StringPret + " " + StringPretTotal;
    }
};


int main()
{
    string input = "1";
    string parola;
    float inputCantitate;
    int ok = 0;
    int ok2 = 1;
    int ok3 = 0;
    int j,i;

    const int nrMaxProduse = 100;
    RoyalCanin RoyalCaninProducts[100];
    Pedigree PedigreeProducts[100];
    Whiskas whiskasProducts[nrMaxProduse];
    Pills PillsProducts[nrMaxProduse];
    Injections InjectionsProducts[nrMaxProduse];
    Mingi mingiProducts[nrMaxProduse];
    Frisbee frisbeeProducts[nrMaxProduse];
    Users users[1000];
    Comanda comenzi[1000];
    string productBrand;
    string animalType;
    string productType;

    int idComanda = -1;
    string username;
    string password;
    string category;
    string dataComanda;
    string previousUsername = " ";
    int idComandaDeAnulat;
    float cantitate;
    int stoc;
    float stocFloat;
    float pret;
    int RoyalCaninProductsNumber= -1;
    int PedigreeProductsNumber = -1;
    int whiskasProductsNumber = -1;
    int PillsProductsNumber = -1;
    int InjectionsProductsNumber = -1;
    int mingiProductsNumber = -1;
    int frisbeeProductsNumber = -1;
    int usersNumber = -1;
    int nrComenziProdus = -1;
    float pretTotal;
    bool emptyRoyalCanin = true;
    bool emptyPedigree = true;
    bool emptyWhiskas = true;
    bool emptyPills = true;
    bool emptyInjections = true;
    bool emptyMingi = true;
    bool emptyFrisbee = true;
    ifstream citireProduse("bazaDeDateProduse.txt");
    ifstream citireUseri("bazaDeDateUseri.txt");
    ifstream citireComanda("Comenzi.txt");

    while(citireProduse >> productBrand)
    {
        citireProduse >> category;
        citireProduse >> animalType;
        citireProduse >> stocFloat;
        citireProduse >> pret;
        citireProduse >> productType;

        if(productBrand == "royalcanin")
        {
            RoyalCaninProducts[++RoyalCaninProductsNumber] = RoyalCanin(stocFloat, pret, productType, animalType, productBrand, category);
        }
        else if(productBrand == "pedigree")
        {
            PedigreeProducts[++PedigreeProductsNumber] = Pedigree(stocFloat, pret, productType, animalType, productBrand, category);
        }

        else if(productBrand == "whiskas")
        {
            whiskasProducts[++whiskasProductsNumber] = Whiskas(stocFloat, pret, productType, animalType, productBrand, category);
        }

        else if(productBrand == "pills")
        {
            PillsProducts[++PillsProductsNumber] = Pills(stoc, pret, productType, animalType, productBrand, category);
        }

        else if(productBrand == "injections")
        {
            InjectionsProducts[++InjectionsProductsNumber] = Injections(stoc, pret, productType, animalType, productBrand, category);
        }
        else if(productBrand == "mingi")
        {
            mingiProducts[++mingiProductsNumber] = Mingi(stoc, pret, productType, animalType, productBrand, category);
        }
        else if(productBrand == "frisbee")
        {
            frisbeeProducts[++frisbeeProductsNumber] = Frisbee(stoc, pret, productType, animalType, productBrand, category);
        }
    }

    while(citireUseri >> username)
    {
        citireUseri >> password;
        users[++usersNumber] = Users(username, password);
    }

    while(citireComanda >> idComanda)
    {
        citireComanda >> dataComanda;
        citireComanda >> username;
        citireComanda >> productType;
        citireComanda >> animalType;
        citireComanda >> productBrand;
        citireComanda >> category;
        citireComanda >> cantitate;
        citireComanda >> pret;
        citireComanda >> pretTotal;
        comenzi[++nrComenziProdus] = Comanda(idComanda, dataComanda, username, productType, animalType, productBrand, category, cantitate, pret);
        if(previousUsername != username)
        {
            idComanda++;
            previousUsername = username;
        }
    }

    citireUseri.clear();
    citireUseri.seekg(0, ios::beg);

    cout << "Welcome to out PetShop! " << endl << endl;
    cout << "NEW USER ? (Y = Yes / Any other input = No)" << endl;
    getline(cin, input);

    while(input == "Y")
    {
        cout << "Enter your desired username" << endl;
        getline(cin, input);
        ok2 = 1;
        while(citireUseri >> username)
        {
            citireUseri >> password;
            if(input == username)
            {
                cout << "'" << input << "'" <<" is already taken. Please enter another one" << endl;
                input = "Y";
                ok2 = 0;
                citireUseri.clear();
                citireUseri.seekg(0, ios::beg);
            }
        }

        if(ok2 == 1)
        {
            username = input;
            cout << "Enter your desired password" << endl;
            getline(cin, input);
            password = input;
            cout << "Welcome to the store :)" << endl;
            users[++usersNumber] = Users(username, password);
            input = "1";
        }
    }
    ok2 = 0;

    while(input != "Y" && input != "1")
    {
        cout << "Enter your username" << endl;
        getline(cin, input);

        while(ok2 == 0 && citireUseri >> username)
        {
            citireUseri >> password;
            if(input == username)
            {
                ok2 = 1;
            }
        }

        while(ok2 == 1)
        {
            cout << "Enter your password" << endl;
            getline(cin, input);
            if(input == password)
            {
                cout << "Welcome to the store :)" << endl;
                ok2 = 0;
                input = "1";
            }
            else
            {
                cout << "This password is wrong, please try again" << endl;
            }
        }

        if ( ok2 == 0 && input != "1")
        {
            cout << "Wrong username...Please try again" << endl;
            citireUseri.clear();
            citireUseri.seekg(0, ios::beg);
        }
    }
    idComanda++;

    while(input != "0")
    {
        while(input == "1")
        {
            cout << "---------------MENIU---------------" << endl;
            cout << "Alegeti o categorie din cele de jos (0 pentru a finaliza comanda)" << endl;
            cout << "--Food" << endl;
            cout << "--Farmacy" << endl;
            cout << "--Toys" << endl;
            cout << "--Optiuni" << endl;

            ok = 0;
            getline(cin, input);

            //FOOD
            if(input == "Optiuni")
            {
                cout << "Alegeti o categorie" << endl;
                cout << "Media cheltuielilor pentru o anumita categorie (Introduceti 'Medie categorie')" << endl;
                cout << "Suma cheltuielilor pentru o anumita data(Introduceti 'Suma data')" << endl;
                cout << "Anulare comanda" << endl;
                getline(cin, input);
                if(input == "Anulare comanda")
                {
                    int acc = 0;
                    cout << "Introduceti id-ul comenzii" << endl;
                    cin >> idComandaDeAnulat;
                    for(i=0; i<=nrComenziProdus; i++)
                    {
                        if(comenzi[i].getIdComanda() == idComandaDeAnulat)
                        {
                            acc = 1;
                            if( comenzi[i].getUsername() != username)
                            {
                                cout << "Nu aveti dreptul sa anulati aceasta comanda" << endl;
                                idComandaDeAnulat = 0;
                                input = "1";
                            }
                            else
                            {
                                cout << "Comanda va fi anulata. Revenire la meniu..." << endl;
                                input = "1";
                            }
                        }
                    }
                    if(acc == 0)
                    {
                        cout << "Nu exista aceasta comanda" << endl;
                        input = "1";
                    }
                }

                if(input == "Medie categorie")
                {
                    int nr = 0;
                    float suma = 0;
                    cout << "Introduceti categoria" << endl;
                    getline(cin, input);
                    for(i=0; i<=nrComenziProdus; i++)
                    {
                        if(comenzi[i].getCategory() == input)
                        {
                            nr++;
                            suma = suma + comenzi[i].getPretTotal();
                        }
                    }
                    if(nr > 0)
                    {
                        cout << "Media cheltuielilor pentru categoria " << input << " este " << suma/nr << endl;
                        input = "1";
                    }
                    else
                    {
                        cout << "Nu exista aceasta categorie. Revenire la meniu.." << endl;
                        input = "1";
                    }
                }

                if(input == "Suma data")
                {
                    float suma = 0;
                    cout << "Introduceti data (format zi/luna/an)" << endl;
                    getline(cin, input);
                    for(i=0; i<=nrComenziProdus; i++)
                    {
                        if(comenzi[i].getDataComanda() == input)
                        {

                            suma = suma + comenzi[i].getPretTotal();
                        }
                    }
                    cout <<"Suma cheltuielilor pentru aceasta data este " << suma << endl << endl;
                    input = "1";
                }
            }

            if(input == "Food")
            {
                while(ok == 0 && (input != "0" && input != "1"))
                {
                    cout << "Alegeti animalul" << endl;
                    cout << "--Dog" << endl;
                    cout << "--Cat" << endl;
                    cout << "--Parrot" << endl;
                    getline(cin, input);

                    if( input == "Dog" || input == "Cat" || input == "Parrot")
                    {
                        ok = 1;
                    }

                    else if(input != "1" && input != "0")
                    {
                        cout << "Nu avem mancare pentru acest animal.Incercati pentru alt animal" << endl;
                    }

                    while(input == "Dog")
                    {
                        cout << "Alegeti o firma din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Royal Canin" << endl;
                        cout << "--Pedigree" << endl;
                        getline(cin, input);

                        if(RoyalCaninProductsNumber > -1)
                        {
                            while(input == "Royal Canin")
                            {
                                cout << "Alegeti modelul din gama Royal Canin(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                                cout << "--Obese" << endl;
                                cout << "--Hypoallergenic" << endl;
                                cout << "--Small" << endl;
                                cout << "--Medium" << endl;
                                cout << "--Big" << endl;
                                getline(cin, input);
                                for(i=0; i<=RoyalCaninProductsNumber && ok3 == 0; i++)
                                {
                                    if(RoyalCaninProducts[i].animalType == "dog" && RoyalCaninProducts[i].type == input )
                                    {
                                        ok3 = 1;
                                    }
                                }
                                i--;

                                if(ok3 == 1)
                                {
                                    while(input == "Obese")
                                    {
                                        cout << "Introduceti cantitatea dorita in kg" << endl;
                                        cin >> inputCantitate;

                                        if(RoyalCaninProducts[i].stockInKg < inputCantitate)
                                        {
                                            cout << "Nu este disponibila aceasta cantitate." << endl << "Cantitate disponibila: " << RoyalCaninProducts[i].stockInKg << endl;
                                            cout <<"Incercati din nou cu alta cantitate"<<endl;
                                            input = "Obese";
                                        }
                                        else
                                        {
                                            RoyalCaninProducts[i].stockInKg -= inputCantitate;
                                            cout << "Cantitate ramasa: " <<RoyalCaninProducts[i].stockInKg << endl;
                                            cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                            getline(cin, input);
                                            getline(cin, input);

                                            if(input == "Y")
                                            {
                                                input = "Royal Canin";
                                            }
                                            else
                                            {
                                                input = "N";
                                            }

                                            comenzi[++nrComenziProdus] = Comanda(idComanda, username, RoyalCaninProducts[i].type, RoyalCaninProducts[i].animalType, RoyalCaninProducts[i].productBrand, RoyalCaninProducts[i].category, inputCantitate, RoyalCaninProducts[i].pricePerKg);
                                        }
                                    }

                                    while(input == "Hypoallergenic")
                                    {
                                        cout << "Introduceti cantitatea dorita in kg" << endl;
                                        cin >> inputCantitate;

                                        if(RoyalCaninProducts[i].stockInKg < inputCantitate)
                                        {
                                            cout << "Nu este disponibila aceasta cantitate." << endl << "Cantitate disponibila: " << RoyalCaninProducts[i].stockInKg << endl;
                                            cout <<"Incercati din nou cu alta cantitate"<<endl;
                                            input = "Hypoallergenic";
                                        }
                                        else
                                        {
                                            RoyalCaninProducts[i].stockInKg -= inputCantitate;
                                            cout << "Cantitate ramasa: " <<RoyalCaninProducts[i].stockInKg << endl;
                                            cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                            getline(cin, input);
                                            getline(cin, input);

                                            if(input == "Y")
                                            {
                                                input = "Royal Canin";
                                            }
                                            else
                                            {
                                                input = "N";
                                            }
                                            comenzi[++nrComenziProdus] = Comanda(idComanda, username, RoyalCaninProducts[i].type, RoyalCaninProducts[i].animalType, RoyalCaninProducts[i].productBrand, RoyalCaninProducts[i].category, inputCantitate, RoyalCaninProducts[i].pricePerKg);
                                        }
                                    }

                                    while(input == "Small")
                                    {
                                        cout << "Introduceti cantitatea dorita in kg" << endl;
                                        cin >> inputCantitate;

                                        if(RoyalCaninProducts[i].stockInKg < inputCantitate)
                                        {
                                            cout << "Nu este disponibila aceasta cantitate." << endl << "Cantitate disponibila: " << RoyalCaninProducts[i].stockInKg << endl;
                                            cout <<"Incercati din nou cu alta cantitate"<<endl;
                                            input = "Small";
                                        }
                                        else
                                        {
                                            RoyalCaninProducts[i].stockInKg -= inputCantitate;
                                            cout << "Cantitate ramasa: " <<RoyalCaninProducts[i].stockInKg << endl;
                                            cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                            getline(cin, input);
                                            getline(cin, input);

                                            if(input == "Y")
                                            {
                                                input = "Royal Canin";
                                            }
                                            else
                                            {
                                                input = "N";
                                            }

                                            comenzi[++nrComenziProdus] = Comanda(idComanda, username, RoyalCaninProducts[i].type, RoyalCaninProducts[i].animalType, RoyalCaninProducts[i].productBrand, RoyalCaninProducts[i].category, inputCantitate, RoyalCaninProducts[i].pricePerKg);
                                        }
                                    }

                                    while(input == "Medium")
                                    {
                                        cout << "Introduceti cantitatea dorita in kg" << endl;
                                        cin >> inputCantitate;

                                        if(RoyalCaninProducts[i].stockInKg < inputCantitate)
                                        {
                                            cout << "Nu este disponibila aceasta cantitate." << endl << "Cantitate disponibila: " << RoyalCaninProducts[i].stockInKg << endl;
                                            cout <<"Incercati din nou cu alta cantitate"<<endl;
                                            input = "Medium";
                                        }
                                        else
                                        {
                                            RoyalCaninProducts[i].stockInKg -= inputCantitate;
                                            cout << "Cantitate ramasa: " <<RoyalCaninProducts[i].stockInKg << endl;
                                            cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                            getline(cin, input);
                                            getline(cin, input);

                                            if(input == "Y")
                                            {
                                                input = "Royal Canin";
                                            }
                                            else
                                            {
                                                input = "N";
                                            }

                                            comenzi[++nrComenziProdus] = Comanda(idComanda, username, RoyalCaninProducts[i].type, RoyalCaninProducts[i].animalType, RoyalCaninProducts[i].productBrand, RoyalCaninProducts[i].category, inputCantitate, RoyalCaninProducts[i].pricePerKg);

                                        }
                                    }
                                    while(input == "Big")
                                    {
                                        cout << "Introduceti cantitatea dorita in kg" << endl;
                                        cin >> inputCantitate;

                                        if(RoyalCaninProducts[i].stockInKg < inputCantitate)
                                        {
                                            cout << "Nu este disponibila aceasta cantitate." << endl << "Cantitate disponibila: " << RoyalCaninProducts[i].stockInKg << endl;
                                            cout <<"Incercati din nou cu alta cantitate"<<endl;
                                            input = "Big";
                                        }
                                        else
                                        {
                                            RoyalCaninProducts[i].stockInKg -= inputCantitate;
                                            cout << "Cantitate ramasa: " <<RoyalCaninProducts[i].stockInKg << endl;
                                            cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                            getline(cin, input);
                                            getline(cin, input);

                                            if(input == "Y")
                                            {
                                                input = "Royal Canin";
                                            }
                                            else
                                            {
                                                input = "N";
                                            }

                                            comenzi[++nrComenziProdus] = Comanda(idComanda, username, RoyalCaninProducts[i].type, RoyalCaninProducts[i].animalType, RoyalCaninProducts[i].productBrand, RoyalCaninProducts[i].category, inputCantitate, RoyalCaninProducts[i].pricePerKg);
                                        }
                                    }

                                    if(input != "1" && input != "0" && input != "Royal Canin" && input != "N")
                                    {
                                        cout << "Acest model nu exista. Incercati din nou..." << endl<<endl;
                                        input = "Royal Canin";
                                    }
                                }

                            }
                        }

                        if(PedigreeProductsNumber > -1)
                        {
                            while(input == "Pedigree")
                            {
                                cout << "Alegeti modelul din gama Pedigree(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                                cout << "--Obese" << endl;
                                cout << "--Hypoallergenic" << endl;
                                cout << "--Small" << endl;
                                cout << "--Medium" << endl;
                                cout << "--Big" << endl;
                                getline(cin, input);

                                if(input == "Obese")
                                {
                                    cout << "Introduceti cantitatea dorita in kg" << endl;
                                    cin >> inputCantitate;
                                    cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Pedigree' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                    getline(cin, input);
                                    getline(cin, input);

                                    if(input == "Y")
                                    {
                                        input = "Pedigree";
                                    }
                                    else
                                    {
                                        input = "N";
                                    }
                                }
                                else if(input == "Hypoallergenic")
                                {
                                    cout << "Introduceti cantitatea dorita in kg" << endl;
                                    cin >> inputCantitate;
                                    cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Pedigree' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                    getline(cin, input);
                                    getline(cin, input);

                                    if(input == "Y")
                                    {
                                        input = "Pedigree";
                                    }
                                    else
                                    {
                                        input = "N";
                                    }
                                }
                                else if(input == "Small")
                                {
                                    cout << "Introduceti cantitatea dorita in kg" << endl;
                                    cin >> inputCantitate;

                                    cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Pedigree' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                    getline(cin, input);
                                    getline(cin, input);

                                    if(input == "Y")
                                    {
                                        input = "Pedigree";
                                    }
                                    else
                                    {
                                        input = "N";
                                    }
                                }
                                else if(input == "Medium")
                                {
                                    cout << "Introduceti cantitatea dorita in kg" << endl;
                                    cin >> inputCantitate;

                                    cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Pedigree' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                    getline(cin, input);
                                    getline(cin, input);

                                    if(input == "Y")
                                    {
                                        input = "Pedigree";
                                    }

                                    else
                                    {
                                        input = "N";
                                    }
                                }
                                else if(input == "Big")
                                {
                                    cout << "Introduceti cantitatea dorita in kg" << endl;
                                    cin >> inputCantitate;

                                    cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Dog->Pedigree' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Dog)" << endl;
                                    getline(cin, input);
                                    getline(cin, input);

                                    if(input == "Y")
                                    {
                                        input = "Pedigree";
                                    }
                                    else
                                    {
                                        input = "N";
                                    }
                                }
                                else if(input != "1" && input != "0")
                                {
                                    cout << "Acest model nu exista. Incercati din nou..." << endl<<endl;
                                    input = "Pedigree";
                                }
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta firma nu este disponibila, incercati din nou..." << endl;
                            input = "Dog";
                        }
                        if(input == "N")
                        {
                            input = "Dog";
                        }
                    }

                    while(input == "Cat")
                    {
                        cout << "Alegeti o firma din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Royal Canin" << endl;
                        cout << "--Whiskas" << endl;
                        getline(cin, input);

                        while(input == "Royal Canin")
                        {
                            cout << "Alegeti modelul din gama Royal Canin(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Obese" << endl;
                            cout << "--Hypoallergenic" << endl;
                            cout << "--Small" << endl;
                            cout << "--Medium" << endl;

                            getline(cin, input);

                            if(input == "Obese")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Royal Canin";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Hypoallergenic")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Royal Canin";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Small")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Royal Canin";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Medium")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Royal Canin' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Royal Canin";
                                }

                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Acest model nu exista. Incercati din nou..." << endl<<endl;
                                input = "Royal Canin";
                            }
                        }

                        while(input == "Whiskas")
                        {
                            cout << "Alegeti modelul din gama Whiskas(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Obese" << endl;
                            cout << "--Hypoallergenic" << endl;
                            cout << "--Small" << endl;
                            cout << "--Medium" << endl;

                            getline(cin, input);

                            if(input == "Obese")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Whiskas' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Whiskas";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Hypoallergenic")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Whiskas' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Whiskas";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Small")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Whiskas' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Whiskas";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Medium")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Cat->Whiskas' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Whiskas";
                                }

                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Acest model nu exista. Incercati din nou..." << endl<<endl;
                                input = "Whiskas";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta firma nu este disponibila, incercati din nou..." << endl;
                            input = "Cat";
                        }
                        if(input == "N")
                        {
                            input = "Cat";
                        }
                    }

                    while(input == "Parrot")
                    {
                        cout << "Alegeti o firma din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Prestige" << endl;
                        cout << "--Kiki" << endl;
                        getline(cin, input);

                        while(input == "Prestige")
                        {
                            cout << "Alegeti modelul din gama Prestige(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Premium" << endl;
                            cout << "--Hawaiian" << endl;

                            getline(cin, input);

                            if(input == "Premium")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Parrot->Prestige' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Prestige";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Hawaiian")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Parrot->Prestige' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Prestige";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input != "1" && input != "0")
                            {
                                cout << "Acest model nu exista. Incercati din nou..." << endl<<endl;
                                input = "Prestige";
                            }
                        }

                        while(input == "Kiki")
                        {
                            cout << "Alegeti modelul din gama Kiki(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Premium" << endl;
                            cout << "--Spicy" << endl;
                            cout << "--Nuts" << endl;

                            getline(cin, input);

                            if(input == "Premium")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Parrot->Kiki' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Kiki";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Spicy")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Parrot->Kiki' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Kiki";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Nuts")
                            {
                                cout << "Introduceti cantitatea dorita in kg" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Food->Parrot->Kiki' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Food->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Kiki";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Acest model nu exista. Incercati din nou..." << endl<<endl;
                                input = "Kiki";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta firma nu este disponibila, incercati din nou..." << endl;
                            input = "Parrot";
                        }
                        if(input == "N")
                        {
                            input = "Parrot";
                        }
                    }
                }
            }

            else if(input == "Farmacy")
            {
                while(ok == 0 && (input != "0" && input != "1"))
                {
                    cout << "Alegeti animalul" << endl;
                    cout << "--Dog" << endl;
                    cout << "--Cat" << endl;
                    cout << "--Parrot" << endl;
                    getline(cin, input);

                    if( input == "Dog" || input == "Cat" || input == "Parrot")
                    {
                        ok = 1;
                    }

                    else if(input != "1" && input != "0")
                    {
                        cout << "Nu avem medicamente pentru acest animal.Incercati pentru alt animal" << endl;
                    }

                    while(input == "Dog")
                    {
                        cout << "Alegeti o firma din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Vanelli" << endl;
                        cout << "--Mondocane" << endl;
                        getline(cin, input);

                        while(input == "Vanelli")
                        {
                            cout << "Alegeti o afectiune din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Conjunctivita" << endl;
                            cout << "--Parvoviroza" << endl;
                            cout << "--Leptospiroza" << endl;
                            cout << "--Parainfluenta" << endl;
                            cout << "--Babesioza" << endl;
                            cout << "--Orhita" << endl;
                            getline(cin, input);

                            if(input == "Conjunctivita")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Parvoviroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Leptospiroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Parainfluenta")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }

                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Babesioza")
                            {

                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Orhita")
                            {

                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input != "1" && input != "0")
                            {
                                cout << "Nu este disponibil niciun tratament pentru aceasta afectiune. Incercati din nou..." << endl<<endl;
                                input = "Vanelli";
                            }
                        }

                        while(input == "Mondocane")
                        {
                            cout << "Alegeti o afectiune din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl << endl;
                            cout << "--Conjunctivita" << endl;
                            cout << "--Parvoviroza" << endl;
                            cout << "--Leptospiroza" << endl;
                            cout << "--Parainfluenta" << endl;
                            cout << "--Carre" << endl;
                            cout << "--Dermatofitoza" << endl;
                            cout << endl;
                            getline(cin, input);

                            if(input == "Conjunctivita")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mondocane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Parvoviroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mondocane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Leptospiroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mondocane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Parainfluenta")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mondocane";
                                }

                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Carre")
                            {

                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mondocane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Dermatofitoza")
                            {

                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mondocane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input != "1" && input != "0")
                            {
                                cout << "Nu este disponibil niciun tratament pentru aceasta afectiune. Incercati din nou..." << endl<<endl;
                                input = "Mondocane";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta firma nu este disponibila, incercati din nou..." << endl;
                            input = "Dog";
                        }
                        if(input == "N")
                        {
                            input = "Dog";
                        }
                    }

                    while(input == "Cat")
                    {
                        cout << "Alegeti o firma din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Vanelli" << endl;
                        cout << "--Cylex" << endl;
                        getline(cin, input);

                        while(input == "Vanelli")
                        {
                            cout << "Alegeti o afectiune din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Conjunctivita" << endl;
                            cout << "--Parvoviroza" << endl;
                            cout << "--Leptospiroza" << endl;
                            cout << "--Raceala" << endl;
                            cout << "--Panleucopenia" << endl;
                            cout << "--Toxoplasmoza" << endl;
                            getline(cin, input);

                            if(input == "Conjunctivita")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Parvoviroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Leptospiroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Raceala")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }

                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Panleucopenia")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Toxoplasmoza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Vanelli";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input != "1" && input != "0")
                            {
                                cout << "Nu este disponibil niciun tratament pentru aceasta afectiune. Incercati din nou..." << endl<<endl;
                                input = "Vanelli";
                            }
                        }

                        while(input == "Cylex")
                        {
                            cout << "Alegeti o afectiune din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Conjunctivita" << endl;
                            cout << "--Parvoviroza" << endl;
                            cout << "--Leptospiroza" << endl;
                            cout << "--Raceala" << endl;
                            cout << "--Paraziti" << endl;
                            cout << "--Giardia" << endl;
                            getline(cin, input);

                            if(input == "Conjunctivita")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Cylex";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Parvoviroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Cylex";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Leptospiroza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Cylex";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Raceala")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Cylex";
                                }

                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Paraziti")
                            {

                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Cylex";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Giardia")
                            {

                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Cylex";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input != "1" && input != "0")
                            {
                                cout << "Nu este disponibil niciun tratament pentru aceasta afectiune. Incercati din nou..." << endl<<endl;
                                input = "Cylex";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta firma nu este disponibila, incercati din nou..." << endl;
                            input = "Cat";
                        }
                        if(input == "N")
                        {
                            input = "Cat";
                        }
                    }

                    while(input == "Parrot")
                    {
                        cout << "Alegeti o firma din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Prestige" << endl;
                        cout << "--Versala" << endl;
                        getline(cin, input);

                        while(input == "Prestige")
                        {
                            cout << "Alegeti o afectiune din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Psitacoza" << endl;
                            cout << "--Aspergiloza" << endl;

                            getline(cin, input);

                            if(input == "Psitacoza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Parrot->Prestige' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Prestige";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Aspergiloza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Parrot->Prestige' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Prestige";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Nu este disponibil niciun tratament pentru aceasta afectiune. Incercati din nou..." << endl<<endl;
                                input = "Prestige";
                            }
                        }

                        while(input == "Versala")
                        {
                            cout << "Alegeti o afectiune din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Psitacoza" << endl;
                            cout << "--Clamidoza" << endl;

                            getline(cin, input);

                            if(input == "Psitacoza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Parrot->Versala' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Versala";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Clamidoza")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Parrot->Versala' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Versala";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Nu este disponibil niciun tratament pentru aceasta afectiune. Incercati din nou..." << endl<<endl;
                                input = "Versala";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta firma nu este disponibila, incercati din nou..." << endl;
                            input = "Parrot";
                        }
                        if(input == "N")
                        {
                            input = "Parrot";
                        }
                    }
                }
            }

            else if(input == "Toys")
            {
                while(ok == 0 && (input != "0" && input != "1"))
                {
                    cout << "Alegeti animalul" << endl;
                    cout << "--Dog" << endl;
                    cout << "--Cat" << endl;
                    cout << "--Parrot" << endl;
                    getline(cin, input);

                    if( input == "Dog" || input == "Cat" || input == "Parrot")
                    {
                        ok = 1;
                    }

                    else if(input != "1" && input != "0")
                    {
                        cout << "Nu avem jucarii pentru acest animal.Incercati pentru alt animal" << endl;
                    }

                    while(input == "Dog")
                    {
                        cout << "Alegeti o categorie din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Mingi" << endl;
                        cout << "--Frisbee" << endl;
                        getline(cin, input);


                        while(input == "Mingi")
                        {

                            cout << "Alegeti o categorie din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Cauciuc" << endl;
                            cout << "--Tenis" << endl;
                            cout << "--Plus" << endl;

                            getline(cin, input);

                            if(input == "Cauciuc")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Dog->Mingi' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mingi";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Tenis")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Dog->Mingi' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mingi";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Plus")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Dog->Mingi' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mingi";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Aceasta jucarie nu este disponibila. Incercati din nou..." << endl<<endl;
                                input = "Mingi";
                            }
                        }

                        while(input == "Frisbee")
                        {
                            cout << "Alegeti o categorie din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Mic" << endl;
                            cout << "--Mediu" << endl;
                            cout << "--Mare" << endl;

                            getline(cin, input);

                            if(input == "Mic")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Dog->Frisbee' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Frisbee)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Frisbee";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Mediu")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Dog->Frisbee' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Frisbee)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Frisbee";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Mare")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Dog->Vanelli' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Dog)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Frisbee";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Aceasta jucarie nu este disponibila. Incercati din nou..." << endl<<endl;
                                input = "Frisbee";
                            }
                        }



                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta categorie nu este disponibila, incercati din nou..." << endl;
                            input = "Dog";
                        }
                        if(input == "N")
                        {
                            input = "Dog";
                        }


                    }

                    while(input == "Cat")
                    {
                        cout << "Alegeti o categorie din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Mingi" << endl;
                        cout << "--Sfori" << endl;
                        getline(cin, input);

                        while(input == "Mingi")
                        {
                            cout << "Alegeti o categorie din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Cauciuc" << endl;
                            cout << "--Tenis" << endl;
                            cout << "--Plus" << endl;

                            getline(cin, input);

                            if(input == "Cauciuc")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Cat->Mingi' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mingi";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Tenis")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Cat->Mingi' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mingi";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Plus")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Cat->Mingi' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Mingi";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Aceasta jucarie nu este disponibila. Incercati din nou..." << endl<<endl;
                                input = "Mingi";
                            }
                        }

                        while(input == "Sfori")
                        {
                            cout << "Alegeti o categorie din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Groase" << endl;
                            cout << "--Subtiri" << endl;
                            cout << "--Multicolore" << endl;

                            getline(cin, input);

                            if(input == "Groase")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Cat->Sfori' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Sfori";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Subtiri")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Cat->Sfori' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Sfori";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Multicolore")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Cat->Sfori' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Cat)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Sfori";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input != "1" && input != "0")
                            {
                                cout << "Aceasta jucarie nu este disponibila. Incercati din nou..." << endl<<endl;
                                input = "Sfori";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta categorie nu este disponibila, incercati din nou..." << endl;
                            input = "Cat";
                        }
                        if(input == "N")
                        {
                            input = "Cat";
                        }
                    }

                    while(input == "Parrot")
                    {
                        cout << "Alegeti o categorie din cele disponibile(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                        cout << "--Leagane" << endl;
                        cout << "--Caruseluri" << endl;
                        getline(cin, input);


                        while(input == "Leagane")
                        {

                            cout << "Alegeti o categorie din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Lemn" << endl;
                            cout << "--Sfoara" << endl;


                            getline(cin, input);

                            if(input == "Lemn")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Parrot->Leagane' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Leagane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input == "Sfoara")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Parrot->Leagane' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Leagane";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }


                            else if(input != "1" && input != "0")
                            {
                                cout << "Aceasta jucarie nu este disponibila. Incercati din nou..." << endl<<endl;
                                input = "Leagane";
                            }
                        }

                        while(input == "Caruseluri")
                        {
                            cout << "Alegeti o categorie din cele de mai jos(0 pentru a finaliza comanda, 1 pentru revenire la meniu)" << endl;
                            cout << "--Lemn" << endl;
                            cout << "--Multicolore" << endl;

                            getline(cin, input);

                            if(input == "Lemn")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Toys->Parrot->Caruseluri' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Toys->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Caruseluri";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }

                            else if(input == "Multicolore")
                            {
                                cout << "Introduceti cantitatea dorita" << endl;
                                cin >> inputCantitate;

                                cout << "Doriti sa mai achizitionati ceva din sectiunea 'Farmacy->Parrot->Caruseluri' ? (Y = Da / Orice alta tasta = Revenire la sectiunea Farmacy->Parrot)" << endl;
                                getline(cin, input);
                                getline(cin, input);

                                if(input == "Y")
                                {
                                    input = "Caruseluri";
                                }
                                else
                                {
                                    input = "N";
                                }
                            }
                            else if(input != "1" && input != "0")
                            {
                                cout << "Aceasta jucarie nu este disponibila. Incercati din nou..." << endl<<endl;
                                input = "Caruseluri";
                            }
                        }

                        if(input != "N" && input !="0" && input != "1")
                        {
                            cout << "Aceasta categorie nu este disponibila, incercati din nou..." << endl;
                            input = "Parrot";
                        }
                        if(input == "N")
                        {
                            input = "Parrot";
                        }
                    }
                }
            }

            else if (input != "0" && input != "1")
            {

                cout << "Nu exista aceasta categorie. Revenire la meniu..." << endl << endl;
                input = "1";
            }
        }

        if(input == "0")
        {
            cout << "**********Comanda finalizata**********" << endl;
        }
    }

    ofstream introducereProduse("bazaDeDateProduse.txt");
    for(i=0; i<= PillsProductsNumber; i++)
    {
        introducereProduse << PillsProducts[i].getLineOfInfo() << endl;
    }
    for(i=0; i<= RoyalCaninProductsNumber; i++)
    {
        introducereProduse << RoyalCaninProducts[i].getLineOfInfo() << endl;
    }
    for(i=0; i<= PedigreeProductsNumber; i++)
    {
        introducereProduse << PedigreeProducts[i].getLineOfInfo() << endl;
    }
    for(i=0; i<= whiskasProductsNumber; i++)
    {
        introducereProduse << whiskasProducts[i].getLineOfInfo() << endl;
    }
    for(i=0; i<= mingiProductsNumber; i++)
    {
        introducereProduse << mingiProducts[i].getLineOfInfo() << endl;
    }
    for(i=0; i<= frisbeeProductsNumber; i++)
    {
        introducereProduse << frisbeeProducts[i].getLineOfInfo() << endl;
    }

    for(i=0; i<= InjectionsProductsNumber; i++)
    {
        introducereProduse << InjectionsProducts[i].getLineOfInfo() << endl;
    }

    ofstream introducereUseri("bazaDeDateUseri.txt");
    for(i=0; i<=usersNumber; i++)
    {
        introducereUseri << users[i].getLineOfInfo() << endl;
    }

    ofstream introducereComenzi("Comenzi.txt");
    for(i=0; i<=nrComenziProdus; i++)
    {
        if(comenzi[i].getIdComanda() != idComandaDeAnulat)
        {
            introducereComenzi << comenzi[i].getLineOfInfo() << endl;
        }
    }
    return 0;
}



