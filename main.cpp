
#include <iostream>

#include<string>

#include<iterator>
#include<algorithm>
using namespace std;

int main11()
{
  string s1= "abcdefg";
try{
    for(int i = 0;i<s1.length()+3;i++){

        cout<<s1[i]<<"";

    }
    cout<<endl;
}
 catch(...){


        cout<<"error1"<<endl;

  }


    for(string::iterator it=s1.begin();it!=s1.end();it++){


                    cout<<*it<<"";


  }
    cout<<endl;


    try{

    for(int i= 0;i<s1.length()+3;i++){

        cout<<s1.at(i)<<"";//�׳��쳣��

    }
    cout<<endl;

    }

    catch(...){

        cout<<"error2\n";

    }


    return 0;
}
//�ַ�ָ���string��ת��
void main23(){

    string s1 = "aaa";

    //1 s1==>char *

    printf("s1:%s\n",s1.c_str());
    //2 char*====>string


    //3  s1������copy buf��
    char buf1[128];

    s1.copy(buf1,3,0);//��0������3;������c�����ַ�����

     cout<<"buf1:"<<buf1<<endl;
}
void main24(){

    //��+������
    string s1 ="aaa";

    string s2 ="bbbb";

    s1 = s1+s2;

    cout<<s1<<endl;
    //��append���ӡ�

    string s3 = "3333";

    string s4 ="555";

    s3.append(s4);

    cout<<"s3:"<<s3<<endl;

}

//�ַ����Ĳ��Һ��滻��

void main25(){


    string s1 = "who hell wbo wbodddd wbo";

    int index = s1.find("wbo",0);

    cout<<"index:"<<index<<endl;
    //��wbo���ֵĴ�����ÿһ�γ��ֵ������±ꡣ

    int offindex = s1.find("wbo",0);

    while(offindex !=string::npos){

        cout<<"offindex:"<<offindex<<endl;

        offindex = offindex +1;

        offindex = s1.find("wbo",offindex);
    }

   //����2��Сдwbo���ɴ�д��WBO.

    offindex = s1.find("wbo",0);

    while(offindex !=string::npos){

        cout<<"offindex:"<<offindex<<endl;

        s1.replace(offindex,3,"MBO");

        offindex = offindex +1;

        offindex = s1.find("wbo",offindex);
    }
        cout<<"s1�滻��Ľ����"<<s1<<endl;
}

//�ַ����Ľضϣ�����ɾ�����Ͳ���
/*D:\QT1\Tools\QtCreator\bin\0528\main.cpp:144: error: no matching function for call to 'find(std::basic_string<char>::iterator, std::basic_string<char>::iterator, char)'
  string::iterator it = find(s1.begin(),s1.end(),'l');
                                                    ^*/
void main26(){

 string s1 = "hello1 1hello2 hello3";
 string::iterator it = find(s1.begin(),s1.end(),'l');//Ҫ�����㷨��#include<algorithm>

    if(it!=s1.end()){

        s1.erase(it);

    }

   cout<<"s1 delete: "<<s1<<endl;

 //  s1.erase(s1.begin(),s1.end());ȫ��ɾ����

   cout<<"s1 erase:"<<s1<<endl;

   cout<<"s1 is length()"<<s1.length()<<endl;

   string s2 ="bbb";

   s2.insert(0,"aa");

   cout<<"s2:"<<s2<<endl;


}


int main(){

   //main23();

   // main24();

  //  main25();

    main26();

    return 0;
}
