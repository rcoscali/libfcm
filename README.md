# libfcm

La librairie FCM (libfcm: File Content Manager) est un ensemble de fonctions permettant de lire à partir d'un fichier, le contenu texte et d'en faciliter l'accès et la manipulation.

Les fonctions disponibles sont à ranger dans 3 catégories:
1. L'accès aux fichiers à partir d'un répertoire de référence par l'intermédiaire d'une structure 'RefDir'
2. L'ouverture et la lecture du contenu d'un fichier par l'intermédiaire d'une structure 'DiskFileContent'
3. La gestion des contenus en mémoire et leur accès par l'intermédiaire d'une structure 'BufferMem'

Le fichier libfcm.h, qui est le fichier de déclaration d'interface de la librairie, fournit les déclarations des 3 headers permettant de définir RefDir, DiskFileContent et BufferMem.

Voici la liste des fichiers:
 - libfcm.h
 - refdir.h
 - diskfilecontent.h
 - buffermem.h
