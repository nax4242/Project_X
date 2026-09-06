# Project_X

1. **Связь с репрезиторием**
- Инициализация:
```
git init
```
- Закреп за папкой репрезитория (origin теперь заменяет ссылку (удобно)):
```
git remote add origin <Ссылка на репрезиторий>
```
- Переименовывание текущей ветки (если master а не main):
```
git branch -M main
```
- Подтягивание `README.md` и `.gitignore`:
```
git pull origin main
```
2. **Классика при работе с github**
- Тройка `git add` -> `git commit` -> `git push`:
  - `git add` - Добавление файлов к текущему сохранению:
  ```
  git add . //Сохранение всех изменений
  git add FileName.cpp //Сохранение конкретного файла
  git add FolderName // Сохранение конкретной папки
  ```
  - `git commit` - Создание сохранения (локально пока что):
  ```
  git commit -m "Сообщение описывающее сохранение"
  ```
  - `git push` - Отправление всех сохранений на GitHub (в выбранную ветку):
  ```
  git push origin main
  ```
- Другие полезные команды:
   - `git pull` - Подтягивает все изменения с GitHub:
  ```
  git pull origin <ИмяВетки>
  ```
  - `git reset` - Убрать файл из сохранение (из того что случайно git add'нули):
  ```
  git reset LishniyFile.cpp
  ```
  - `git clone` - Скачать существующий репрезиторий с GitHub:
  ```
  git clone <Ссылка на репрезиторий>
  cd <Имя репрезитория>
  ```
3. **Маневры в ветками**
- `git branch` - Создание ветки:
```
git branch <Имя ветки>
```
- `git checkout` - Перейти в ветку:
```
git checkout <Имя ветки>
```
- Создать ветку и перейти в нее:
```
git checkout -b dev
```
4. **Очень редко**
- Если на устройстве первый раз с git
```
git config --global user.name "Имя"
git config --global user.mail "Почта"
```
  
