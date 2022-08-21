//引数の桁数を返す．
int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

//引数の文字列の辞書順で大きい方を返す関数．
string l_max(string a,string b)
{
    if(a >= b){
        return a;
    }
    return b;
}

string super_max(string a,string b, string c)
{
    if(a >= b){
        if(c >= a){
            return c;
        } else {
            return a;
        }    
    } else if(b >= a){
        if(c >= b){
            return c;
        } else {
            return b;
        }
    }else if(b >= c){
        if(a >= b){
            return a;
        } else {
            return b;
        }
    } else if(c >= b){
        if(b >= c){
            return b;
        } else {
            return c;
        }
    }else if(c >= a){
        if(b >= c){
            return b;
        } else {
            return c;
        }
    } else if(a >= c){
        if(b >= a){
            return b;
        } else {
            return a;
        }
    }
}