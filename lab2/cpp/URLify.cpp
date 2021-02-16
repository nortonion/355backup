void URLify(char* arr, int length){

   //We assume arr and length are valid just like how it is shown in instructions

   int spaces = 0;
   int l = length;
   while(arr[l] != '\0'){
      l++;
   }
   l--;
   for (int i=length-1; i>=0; i--)
   {
      if (arr[i] == ' ')
      {
         arr[l] = '0';
         arr[l-1] = '2';
         arr[l-2] = '%';
         l-=3;
      }
      else
      {
         arr[l] = arr[i];
         l--;
      }
   }
}
