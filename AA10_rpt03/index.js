var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});
router.get('/aa10', function(req, res, next) {
  res.render('aa10', { title: 'Express App', id: 'AA10', name: 'Redwoods' });
});

module.exports = router;
