#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXWORD 100

//Szymon Kącki
//2018-01-19

struct tnode {
  char *word;
  int count;
  struct tnode *left;
  struct tnode *right;
};

struct tnode *addtree(struct tnode *p, char *w) {
  int cond;

  if (p == NULL) {p = malloc(sizeof(struct tnode)); p->word = strdup(w); p->count = 1; p->left = p->right = NULL;}
  else if ((cond = strcmp(w, p->word)) == 0) {p->count++;}
  else if (cond < 0) {p->left = addtree(p->left, w);}
  else {p->right = addtree(p->right, w);}
  return p;
}

void treeprint(struct tnode *p) {
  if (p != NULL) {
    treeprint(p->left);
    printf("%4d %s\n", p->count, p->word);
    treeprint(p->right);}}

int getword(char *word, int lim) {
  int c;
  char *w = word;

  while (isspace(c = getc(stdin)));
  if (c != EOF) {*w++ = c;}
  if (!isalpha(c)) {*w = '\0'; return c;}
  for ( ; --lim > 0; w++) {
    if (!isalnum(*w = getc(stdin))){ungetc(*w, stdin); break;}}
  *w = '\0';
  return word[0];
}


int main() {
  struct tnode *root;
  char word[MAXWORD];
  root = NULL;
  FILE * IN = freopen( "ulysses.txt", "r", stdin );
  while (getword(word, MAXWORD) != EOF) {
    if (isalpha(word[0])) {root = addtree(root, word);}}
  treeprint(root);
  fclose(IN);
  return 0;
}
