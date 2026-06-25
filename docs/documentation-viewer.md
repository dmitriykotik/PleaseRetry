# Средство просмотра документации
<button class="md-modal-trigger" data-md-path="current-dv.md">О текущем ПО</button>

Данное средство создано для просмотра локальной документации формата `.md`.\
Вы можете загрузить данный проект и использовать его для своих целей.

## Структура проекта
```md
documentation-viewer
|- index.html
|- docs
 |- [Ваша документация]
```

Весь проект содержится в одном файле: `index.html`. В папке `docs` хранится документация, однако, вы можете использовать любую другую папку.

## Управление документацией
`Средство просмотра документации` автоматически не добавляет документацию. Чтобы ваша документация появилась в списке - измените код файла `index.html`.

В самом начале блока `<script>` есть переменная `DOCS_STRUCTURE`. Данная переменная отвечает за вывод документации в _древо просмотра_ _(Если данной переменной нет, то создайте её). Данная переменная содержит `JSON`-код.

Каждый <abbr title="Блок/элемент { } в json переменной DOCS_STRUCTURE">блок</abbr> содержит в себе несколько видов переменных: `type`, `name`, `path`, `children`. _Однако не все переменные можно использовать в одном блоке._\
`type` - Отвечает за тип элемента, который будет добавлен в список.\
`name` - Отвечает за название элемента, которое будет отображено в списке.\
`path` - Путь до файла `.md`.\
`children` - Может содержать в себе дочерние блоки.\

В этой таблице приведены переменные, которые могут использоваться при указанных значениях переменной `type`.
| Значение переменной `type` | Переменные                 |
| :------------------------- | :------------------------- |
| `file`                     | `name`, `path`             |
| `dir`                      | `name`, `children`         |
| `file-dir`                 | `name`, `path`, `children` |

Пример блоков:
```json
{
    type: "file",
    name: "Simple file 1",
    path: "docs/simple_file.md"
},
{
    type: "dir",
    name: "Simple dir",
    children: [
        {
            type: "file",
            name: "Simple file 2",
            path: "docs/simple_file_2.md"
        }
    ]
},
{
    type: "file-dir",
    name: "Simple file-dir",
    path: "docs/simple_file-dir.md",
    children: [
        {
            type: "file",
            name: "Simple file 3",
            path: "docs/simple_file_3.md"
        }
    ]
}
```

<aside class="sidebar">
    <ul class="tree-view">
        <li href="javascript:void(0);" class="md-modal-trigger" data-md-path="simple_file.md">Simple file 1</li>
        <li>Simple dir</li>
        <ul>
            <li href="javascript:void(0);" class="md-modal-trigger" data-md-path="simple_file.md">Simple file 2</li>
        </ul>
        <li href="javascript:void(0);" class="md-modal-trigger" data-md-path="simple_file.md">Simple file-dir</li>
        <ul>
            <li href="javascript:void(0);" class="md-modal-trigger" data-md-path="simple_file.md">Simple file 3</li>
        </ul>
    </ul>
</aside>

## Разметка
`Средство просмотра документации` использует стандартную разметку `MD` из библиотеки `marked.js` с дополнением `GitHub Alerts`.\
Воспользуйтесь документацией от GitHub. <button onclick="openExternalLinkModal('https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax')">Перейти на сайт GitHub</button>\
Также вы можете посмотреть всю базовую разметку в [этом файле](#sample_md).

## Дополнительная разметка
Хоть `средство просмотра документации` использует стандартную разметку, однако, есть и дополнительная разметка.

Вы можете добавить элементы, которые откроют всплывающее окно. Само окно будет содержать в себе некоторый файл.\
<button class="md-modal-trigger" data-md-path="simple_file.md">Нажми на меня!</button>
```html
<button class="md-modal-trigger" data-md-path="simple_file.md">Нажми на меня!</button>
```
<a href="javascript:void(0);" class="md-modal-trigger" data-md-path="simple_file.md">Не желаешь кликнуть?</a>
```html
<a href="javascript:void(0);" class="md-modal-trigger" data-md-path="simple_file.md">Не желаешь кликнуть?</a>
```
`md-modal-trigger` - Определяет класс всплывающего окна.\
`data-md-path` - Переменная, в которой определяется открываемый файл.
> [!WARNING]
> В переменной `data-md-path` указывается только локальный файл и только файл формата `.md` (или `.html`)!

Открыть внешнюю ссылку вы можете другим способом.
<button onclick="openExternalLinkModal('https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax')">Документация по MD</button>
```html
<button onclick="openExternalLinkModal('https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax')">Документация по MD</button>
```
<a href="https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax">Можно и тут документацию прочитать</a>
```html
<a href="https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax">Можно и тут документацию прочитать</a>
```
[Да и так тоже можно](https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
```md
[Да и так тоже можно](https://docs.github.com/ru/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
```
При открытии любой внешней ссылки будет отображаться всплывающее окно.

По локальным файлам можно перемещаться с помощью `#`.\
Можно перемещаться с помощью <abbr title="Псевдоним, добавленный в переменной `ROUTE_ALIASES`">алиасов</abbr>:
[Та самая документация](#doc-viewer)
```md
[Та самая документация](#doc-viewer)
```
Или с помощью полного пути до файла:
[Та самая самая документация](#docs/documentation-viewer.md)
```md
[Та самая самая документация](#docs/documentation-viewer.md)
```

## Алиасы
Алиас - это псевдоним, созданный для сокращения полной ссылки до файла. Все алиасы располагаются в переменной `ROUTE_ALIASES`.\
Структура:
```json
'Псевдоним': { path: 'Путь (например, "docs/sample1.md")', name: 'Название' },
'doc-viewer':  { path: 'docs/documentation-viewer.md', name: 'Документация по \"Средству просмотра документации\"' },
<...>
```

## В завершении
Проект создан для просмотра документации. Не более. Однако вы можете [запустить Doom](#doom).