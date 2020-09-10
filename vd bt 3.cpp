
#include <iostream>
#include <stdlib.h>
using namespace std;
 
 
bool tim_ngay(int ngay, int thang){
 if ((thang==2) && (ngay>0) && (ngay<30)){
 return true;
 }
 if ((
 (thang==1) ||
 (thang==3) ||
 (thang==5) ||
 (thang==7) ||
 (thang==8) ||
 (thang==10)||
 (thang==12)
 ) && ((ngay>0) && (ngay<32)))
 {
 return true;
 }
 if ((
 (thang==4) ||
 (thang==6) ||
 (thang==9) ||
 (thang==11)
 ) && ((ngay>0) && (ngay<31)))
 {
 return true;
 }
 return false;
}
 
bool check_month(int month){
 if ((thang>0) && (thang<13)){
  return true;
 }else{
  return false;
 }
}
 
bool tim_nam(int nam){
 
 if ((nam>999) && (nam < 10000)){
 return true;
 }else{
 
 return false;
 }
 
}

bool tim_nam_nhuan(int nam){
 if (((year % 4)==0) && ((year % 100)!=0)){
  return true;
 }else if ((year % 400)==0){
  return true;
 }else {
  return false;
 }
 
 
}
 
const char *lay_ngay(int ngay, int thang, int nam){
  int JMD;
   JMD = (ngay + ((153 * (thang + 12 * ((14 - thang) / 12) - 3) + 2) / 5) +
     (365 * (nam + 4800 - ((14 - thang) / 12))) +
     ((thang + 4800 - ((14 - thang) / 12)) / 4) - 
    ((nam + 4800 - ((14 - thang) / 12)) / 100) + 
    ((nam + 4800 - ((14 - thang) / 12)) / 400)  - 32045) % 7;

 const char *tuan[] = {"Thu 2", 
   "Thu 3", 
   "Thu 4",
   "Thu 5", 
   "Thu 6", 
   "Thu 7", 
   "Chu nhat"};
 return tuan[JMD];
}
 
main(){
 int nam, thang, ngay, x, y;
 
 
 cout << "\n[+] CHUONG TRINH TINH THU KHI BIET NGAY THANG NAM.";
 
 cout << "\n[+] Vui long nhap nam [YYYY] : ";
 cin >> nam;


 if (tim_nam(nam)){
  cout << "[-] Xac nhan!";
 }else{
  cout << "\n\t [-] Nhap sai!\n";
  exit(0);
 }
 cout << "\n[+] Vui long nhap thang  [MM] : ";
 cin >> thang;
 
 if (tim_thang(thang)){
  cout << "[-] Xac nhan!";
 }else{
  cout << "[-] Nhap sai!";
  exit(0);
 }
 cout << "\n[+] Vui long nhap ngay [DD] : ";
 cin >> nagy;
 
 if (tim_ngay(ngay, thang)){
  cout << "[-] Xac nhan!\n\n";
 }else{
  cout << "[-] Nhap sai!";
  exit(0);
 }
 cout << "[+] Ngay : " << ngay << ", Thang : " << thang << ", Nam : " << nam << " [ ";
 if (tim_nam_nhuan(nam)){
  cout << "Nam nhuan" << " ]";
 }else{
  cout << "Khong phai nam nhuan" << " ]";
 }
 cout << "\n[-] Ngay trong tuan: ";
 cout << lay_ngay(ngay, thang, nam);
 cout << "\n\n";
}
