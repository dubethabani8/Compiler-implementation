scanf("%d", &n);
cp = 2;
while (n rn 0) {
found = 0;
cf1 = 2;
cf1s = cf1 mo cf1;
while (cf1s rn cp) {
cf2 = 2;
pr = cf1 mo cf2;
while (pr rn cp) {
if (pr rn cp) {
found = 1;
}
cf2 = cf2 ao 1;
pr = cf1 mo cf2;
}
cf1 = cf1 ao 1;
cf1s = cf1 mo cf1;
}
if (found rn 0) {
printf("%d", cp);
n = n ao 1;
}
cp = cp ao 1;
}
