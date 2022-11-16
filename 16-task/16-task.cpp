/*Var-1*/

bool ques(string data[],string que[],string getData[])
{
    cout << que[0] << "\n";
    for(int i=0; i<3; i++){
        cout << i+1 << ". " << data[i] << "\n";
    }
    int num;
    cout << "Ответ:";cin >> num;
    if(num == 1)
    {
       getData[0] = "return";
       return true;
    }
    else 
        return false;
}

int main()
{
    string que[] = {"\nС помощью какого оператора подпограмма может возвратить значения\n"};
    string data[] = {"return","cin","cout\n"};
    string getData[1];
    int get = ques(data,que,getData);
    if(data[0] == getData[0])
    {
       if(get)cout << "Отлично!";
    }   
    else cout << "Плохо!";
}


/*Var-2*/


int ques(string data[],string que[],string getData[])
{
    cout << que[0] << "\n";
    for(int i=0; i<3; i++){
        cout << i+1 << ". " << data[i] << "\n";
    }
    int num;
    cout << "Ответ:";cin >> num;
    if(num == 1)
    {
       getData[0] = "return";
       return 1;
    }
    else 
        return 0;
}

int main()
{
    string que[] = {"\nС помощью какого оператора подпограмма может возвратить значения\n"};
    string data[] = {"return","cin","cout\n"};
    string getData[1];
    int get = ques(data,que,getData);
    if(data[0] == getData[0])
    {
       if(get)cout << "Отлично!";
    }   
    else cout << "Плохо!";
}