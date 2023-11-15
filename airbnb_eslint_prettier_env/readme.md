<h2>First you need to install these dependencies</h2>

<p><strong>Run these commands in your terminal: </strong></p>

yarn add -D eslint prettier   
npx install-peerdeps --dev eslint-config-airbnb-base  
yarn add -D eslint-config-prettier eslint-plugin-prettier

<h2>Create a file name .eslintrc.json and paste the code</h2>

``` 
eslintrc.json
```

```javascript
{
    "extends": ["prettier", "airbnb-base"],
    "parserOptions": {
      "ecmaVersion": 12
    },
    "env": {
      "commonjs": true,
      "node": true
    },
    "rules": {
      "no-console": 0,
      "indent": 0,
      "linebreak-style": 0,
      "prettier/prettier": [
        "error",
        {
          "trailingComma": "es5",
          "singleQuote": true,
          "printWidth": 100,
          "tabWidth": 4,
          "semi": true
        }
      ]
    },
    "plugins": ["prettier"]
}
```

<h2>Open VS code setting and paste the code</h2>

```javascript
{
    // config related to code formatting
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "editor.formatOnSave": true,
    "[javascript]": {
    "editor.formatOnSave": false,
    "editor.defaultFormatter": null
    },
    "editor.codeActionsOnSave": {
    "source.fixAll.eslint": true,
    "source.organizeImports": true
    },
    "eslint.alwaysShowStatus": true
}
```
