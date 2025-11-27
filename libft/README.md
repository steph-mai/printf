Libft — Fonctions, descriptions et prototypes

PARTIE 1 — Fonctions de la libc

Mémoire

ft_memset : Remplit une zone mémoire avec un octet donné void *ft_memset(void *s, int c, size_t n);

ft_bzero : Met une zone mémoire à zéro void ft_bzero(void *s, size_t n);

ft_memcpy : Copie n octets d’une zone mémoire vers une autre void *ft_memcpy(void *dst, const void *src, size_t n);

ft_memccpy : Copie jusqu’à un caractère donné void *ft_memccpy(void *dst, const void *src, int c, size_t n);

ft_memmove : Copie mémoire sûre (zones qui se chevauchent) void *ft_memmove(void *dst, const void *src, size_t len);

ft_memchr : Cherche un octet dans une zone mémoire void *ft_memchr(const void *s, int c, size_t n);

ft_memcmp : Compare deux zones mémoire int ft_memcmp(const void *s1, const void *s2, size_t n);

Chaînes de caractères

ft_strlen : Retourne la longueur d’une chaîne size_t ft_strlen(const char *s);

ft_strlcpy : Copie une string avec taille maximum size_t ft_strlcpy(char *dst, const char *src, size_t size);

ft_strlcat : Concatène une string avec taille maximum size_t ft_strlcat(char *dst, const char *src, size_t size);

ft_strchr : Trouve la première occurrence d’un caractère char *ft_strchr(const char *s, int c);

ft_strrchr : Trouve la dernière occurrence d’un caractère char *ft_strrchr(const char *s, int c);

ft_strnstr : Trouve une sous-chaîne dans une autre char *ft_strnstr(const char *haystack, const char *needle, size_t len);

ft_strncmp : Compare deux strings sur n caractères int ft_strncmp(const char *s1, const char *s2, size_t n);

Conversions

ft_atoi : Convertit une string en entier int ft_atoi(const char *nptr);

ft_itoa : Convertit un entier en string char *ft_itoa(int n);

Tests de caractères

ft_isalpha : Test si lettre int ft_isalpha(int c);

ft_isdigit : Test si chiffre int ft_isdigit(int c);

ft_isalnum : Test alphanumérique int ft_isalnum(int c);

ft_isascii : Test ASCII int ft_isascii(int c);

ft_isprint : Test imprimable int ft_isprint(int c);

Transformations

ft_toupper : Convertit en majuscule int ft_toupper(int c);

ft_tolower : Convertit en minuscule int ft_tolower(int c);

Allocation & duplication

ft_calloc : Alloue et met à zéro void *ft_calloc(size_t nmemb, size_t size);

ft_strdup : Duplique une string char *ft_strdup(const char *s);

PARTIE 2 — Fonctions supplémentaires

Manipulation de strings

ft_substr : Extrait une sous-chaîne char *ft_substr(char const *s, unsigned int start, size_t len);

ft_strjoin : Concatène deux strings char *ft_strjoin(char const *s1, char const *s2);

ft_strtrim : Retire des caractères au début/fin char *ft_strtrim(char const *s1, char const *set);

ft_split : Découpe une string en tableau char **ft_split(char const *s, char c);

ft_strmapi : Applique une fonction sur chaque caractère (nouvelle string) char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

ft_striteri : Applique une fonction sur chaque caractère (modifie la string) void ft_striteri(char *s, void (*f)(unsigned int, char *));

Sortie (file descriptor)

ft_putchar_fd : Écrit un caractère void ft_putchar_fd(char c, int fd);

ft_putstr_fd : Écrit une string void ft_putstr_fd(char *s, int fd);

ft_putendl_fd : Écrit une string + newline void ft_putendl_fd(char *s, int fd);

ft_putnbr_fd : Écrit un entier void ft_putnbr_fd(int n, int fd);

BONUS — Listes chaînées

Structure : typedef struct s_list { void *content; struct s_list *next; } t_list;
Fonctions

ft_lstnew : Crée un nouveau maillon t_list *ft_lstnew(void *content);

ft_lstadd_front : Ajoute un maillon en tête void ft_lstadd_front(t_list **lst, t_list *new);
... (14lignes restantes)
