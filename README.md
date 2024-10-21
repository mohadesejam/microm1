int led=13;
void setup() {
  // put your setup code here, to run once:
 pinMode(led,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(3000);
digitalWrite(led,LOW);
delay(1000);
}

نوشتن برنامه چشمک زن
اول یک ledبرمیداریم پایه مثبتled را به پایه ی شماره 13 وصل میکنیم و پایه منفی ledرا به زمین وصل میکنیم.ماداخل کد اول ازهمه voidsetup که کد داخل قسمت خود را فقط یکبار آپلود میکند وپایه 13 رو ببا دستور pinMode خروجی کردیم.مرحله ی بعد داخل void loop که کد را اجرا میکند و وقتی کدتمام میشود دوباره اون رو از اول اجرا میکند (loop به معنای حلقه است).
حالا,digital Write (led,HIGH) برای دستور به پایه های دیجیتال می نویسیم وکه HiGH روشن و Low خاموش . ودستور delay هم به معنای تاخیراست  ماداخل (1000) نوشتیم به معنای این که 1000میکروثانیه خاموش و 3000 ثانیه روشن باشد.

 
