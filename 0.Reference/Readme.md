## Reference

+ reference와 pointer의 차이
  + 레퍼런스는 한 번 별명이 되면 절대로 다른 이의 별명이 될 수 없다.
  + 레퍼런스는 메모리상에 있을 수도 없을 수도 있다
    + 참조자는 객체가 아니기 때문에 저장 저장 공간을 반드시 필요하지 않지만, 컴파일러가 필요하다면 구현에 따라 저장 공간을 차지할 수 있다
    + 리터럴은 일반적으로 참조할 수 없다
      + 그러나 const의 경우 가능하다

+ 레퍼런스 배열은 불가능하다

+ 배열 레퍼런스는 가능하다

  + int arr[3] = {1,2,3}
  + int (&ref)[3] = arr

+ Dangling reference

  + 레퍼런스는 있는데 원래 참조 하던 것이 사라진 레펄런스를 말한다.
  + 함수 안의 지역변수를 return 할 경우 발생한다.
    + int& function(){ int a = 5, return a}
      + int b = function()
  + 함수안의 지역변수의 return을 reference로 받을 때도 컴파일 에러
    + int& function(){ int a = 5, return a}
      + int &b = function()
    + 예외
      + int& function(){ int a = 5, return a}
      + const int &b = function()
      + 가능하다

  