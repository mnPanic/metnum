# Experimentación y python

Evitar instalar cosas a nivel sistema

Se instalan en una burbuja que no debería romper nada por fuera.

- virtualenv & virtualenvwrapper
- conda
- pyenv: a parte de los ambientes virtuales, para correr el código con
  diferentes versiones de python.

1. Crear un ambiente
2. Meternos al ambiente
3. Salir del ambiente

## virtualenvwrapper

```bash
# crear
mkvirtualenv {ambiente}

# entrar
workon {ambiente}

# salir
deactivate

# borrar
rmvirtualenv {ambiente}
```

- `pip freeze`: cosas instaladas en el ambiente

## jupyter notebook

Para entrar, `jupyter notebook` y `localhost:8888/tree`

## numpy

numpy all close

tqdm para un for saber por donde va

